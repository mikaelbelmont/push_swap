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

static long ft_atoibuf(char **str)
{
	int	i;
	long	n;
	long	neg;

	i = 0;
	n = 0;
	neg = 1;
	while (*str[i] == ' ' || *str[i] == '\n' || *str[i] == '\t'
		|| *str[i] == '\v' || *str[i] == '\f' || *str[i] == '\r')
		i++;
	if (*str[i] == '-' || *str[i] == '+')
	{
		if (*str[i] == '-')
			neg *= -1;
		i++;
	}
	while (*str[i] >= '0' && *str[i] <= '9')
	{
		n = n * 10 + (*str[i] - '0');
		if (n < -2147483647 || n > 2147483647)
			return (2147483648);
		i++;
	}
	return (n * neg);
}

int ft_checkdups(t_stack *a)
{
	t_stack *tmp;

	tmp = a;
	if (!tmp)
		return (1);
	while (tmp->next)
	{
		if (tmp->num == tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int ft_newnode(t_stack **a, int n)
{
	t_stack	*newnode;

	newnode = malloc(sizeof(t_stack));
	if (!newnode)
		return (0);
	newnode->next = NULL;
	newnode->num = n;
	newnode->order = 0;
	ft_lstadd_back(a, newnode);
}

int ft_checker(t_stack **a, char **av)
{
	int n;
	int i;
	
	i = 0;
	n = 0;
	while (av[i])
	{
		n = ft_atoibuf(av[i++]);
		if (!ft_checkdups(a) || !n)
			return (0);
		ft_newnode(a, n);
	}
	return (1);
}
