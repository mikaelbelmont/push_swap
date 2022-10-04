/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:27:38 by mbarreto          #+#    #+#             */
/*   Updated: 2022/10/04 16:45:39 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
	return ;
}

void	sort3(t_list **a)
{
	while (!((*a)->content < (*a)->next->content && \
		(*a)->next->content < (*a)->next->next->content))
	{
		if ((*a)->content > (*a)->next->content && \
			(*a)->content < (*a)->next->next->content)
			sa(a);
		else if ((*a)->content < (*a)->next->content && \
				(*a)->content > (*a)->next->next->content)
			rra(a);
		else if ((*a)->content < (*a)->next->content && \
				(*a)->content < (*a)->next->next->content)
			rra(a);
		else if ((*a)->content > (*a)->next->content && \
				(*a)->content > (*a)->next->next->content)
			ra(a);
	}
}

void	sort4(t_list **a, t_list **b)
{
	int	max;
	int	min;

	max = INT_MIN;
	min = INT_MAX;
	extremes(*a, &max, &min);
	while ((*a)->index != min)
		ra(a);
	pb(a, b);
	sort3(a);
	pa(a, b);
}

void	sort5(t_list **a, t_list **b)
{
	int	max;
	int	min;

	max = INT_MIN;
	min = INT_MAX;
	extremes(*a, &max, &min);
	while ((*a)->index != max && (*a)->index != min)
		ra(a);
	pb(a, b);
	while ((*a)->index != max && (*a)->index != min)
		ra(a);
	pb(a, b);
	sort3(a);
	if ((*b)-> index < (*b)->next->index)
		rb(b);
	pa(a, b);
	ra(a);
	pa(a, b);
}

void	sort_big(t_list **a, t_list **b)
{
	int	max;
	int	min;
	int	bitnum;

	max = INT_MIN;
	min = INT_MAX;
	extremes(*a, &max, &min);
	bitnum = biggerbits(max);
	ft_radixsort(a, b, bitnum);
}
