/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:09:53 by mbarreto          #+#    #+#             */
/*   Updated: 2022/08/30 19:02:24 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atoibuf(char **str)
{
	long	n;
	long	neg;

	n = 0;
	neg = 1;
	while (**str == ' ' || **str == '\n' || **str == '\t'
		|| **str == '\v' || **str == '\f' || **str == '\r')
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			neg *= -1;
		*str += 1;
	}
	while (**str >= '0' && **str <= '9')
	{
		n = n * 10 + (**str - '0');
		
		if (n < -2147483648 || n > 2147483647)
			return (2147483648);
		*str += 1;
	}
	return (n * neg);
}

int	ft_checkdups(t_list **a, int n)
{
	t_list *tmp;

	tmp = (*a);
	//if (!tmp)
	//	return (1);
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
		ft_end(a);
	newnode->next = NULL;
	newnode->content = n;
	newnode->order = 0;
	ft_lstadd_back(a, newnode);
	if (!a)
		ft_end(a);
}

void	ft_checker(t_list **a, char **av)
{
	int n;
	int	i;
	int first;
	
	i = 0;
	n = 0;
	first = 0;
	while (av[++i])
	{
		if (av[i][0] == '\0')
			ft_end(a);
		while (av[i][0])
		{
			n = ft_atoibuf(&av[i]);
			if (n > 2147483647)
				ft_end(a);
			if (first && ft_checkdups(a, n))
				ft_end(a);
			ft_newnode(a, n);
			printf("foi aq\n");
			first = 1;
		}
	}
}
