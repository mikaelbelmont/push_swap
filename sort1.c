/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:27:38 by mbarreto          #+#    #+#             */
/*   Updated: 2022/09/30 15:09:54 by mbarreto         ###   ########.fr       */
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
	ft_printlist(*a);
	sort3(a);
	printf("aqui\n");
	if ((*b)-> index < (*b)->next->index)
		ra(a);
	pa(a, b);
	ra(a);
	pa(a, b);
}

//void	sort_big(t_list **a, t_list **b)
//{
//	
//}

void	ft_sorts(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
	{
		sort2(a);
		return ;
	}
	if (ft_lstsize(*a) == 3)
	{
		sort3(a);
		return ;
	}
	if (ft_lstsize(*a) == 4)
	{
		sort4(a, b);
		return ;
	}
	else
	{
		sort5(a, b);
		return ;
	}
	return ;
}
