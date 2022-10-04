/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:31:06 by mbarreto          #+#    #+#             */
/*   Updated: 2022/10/04 16:26:36 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_list **a)
{
	t_list	*tmp;
	int		i;
	int		count;

	i = 0;
	while (i++ < ft_lstsize(*a))
	{
		tmp = *a;
		count = INT_MAX;
		while (tmp)
		{
			if (count > tmp->content && tmp->index == 0)
				count = tmp->content;
			tmp = tmp->next;
		}
		tmp = *a;
		while (tmp && tmp->content != count)
			tmp = tmp->next;
		tmp->index = i;
	}
}

void	extremes(t_list *a, int *max, int *min)
{
	while (a)
	{
		if (a->index > *max)
			*max = a->index;
		if (a->index < *min)
			*min = a->index;
		a = a->next;
	}
}
