/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:09:56 by mbarreto          #+#    #+#             */
/*   Updated: 2022/10/05 17:51:07 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknum(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if ((av[i][j] == '-' || av[i][j++] == '+') && !av[i][j])
			return (0);
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
				ft_end(0, 1);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_sorts(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
		sort2(a);
	else if (ft_lstsize(*a) == 3)
		sort3(a);
	else if (ft_lstsize(*a) == 4)
		sort4(a, b);
	else if (ft_lstsize(*a) == 5)
		sort5(a, b);
	else
		sort_big(a, b);
	return ;
}

int	checkordered(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = 0;
	b = 0;
	if (ac < 2)
		exit(0);
	checknull(av);
	ft_checker(&a, av);
	ft_index(&a);
	if (checkordered(&a))
		ft_end(&a, 0);
	ft_sorts(&a, &b);
	ft_end(&a, 0);
	return (0);
}
