/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:09:53 by mbarreto          #+#    #+#             */
/*   Updated: 2022/10/05 17:51:16 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atoibuf(char **str)
{
	long	n;
	long	neg;

	n = 0;
	neg = 1;
	while (**str == 32 || (**str >= 9 && **str <= 13))
		*str += 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			neg *= -1;
		*str += 1;
	}
	while (**str >= '0' && **str <= '9')
	{
		n = n * 10 + (**str - '0');
		if (n < INT_MIN || n > INT_MAX)
			return (2147483648);
		*str += 1;
	}
	while (**str == 32 || (**str >= 9 && **str <= 13))
		*str += 1;
	return (n * neg);
}

int	ft_checkdups(t_list **a, int n)
{
	t_list	*tmp;

	tmp = (*a);
	if (!tmp)
		return (1);
	while (tmp)
	{
		if (tmp->content == n)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	ft_newnode(t_list **a, int n)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		ft_end(a, 1);
	newnode->next = NULL;
	newnode->content = n;
	newnode->index = 0;
	ft_lstadd_back(a, newnode);
	if (!a)
		ft_end(a, 1);
}

void	checknull(char **str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[i][++j])
		{
			if (str[i][j] == '-' && (str[i][j + 1] == 0 \
			|| str[i][j + 1] == ' '))
				ft_end(0, 1);
			else if (str[i][j] == '+' && (str[i][j + 1] == 0 \
			|| str[i][j + 1] == ' '))
				ft_end(0, 1);
		}
	}
}

void	ft_checker(t_list **a, char **av)
{
	long	n;
	int		i;
	int		first;

	i = 0;
	n = 0;
	first = 0;
	while (av[++i])
	{
		if (av[i][0] == 0)
			ft_end(a, 1);
		while (av[i][0])
		{
			n = ft_atoibuf(&av[i]);
			if (n > INT_MAX)
				ft_end(a, 1);
			if (first && ft_checkdups(a, n))
				ft_end(a, 1);
			ft_newnode(a, n);
			first = 1;
		}
	}
}
