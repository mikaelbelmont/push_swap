/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:06:44 by mbarreto          #+#    #+#             */
/*   Updated: 2022/10/05 15:53:59 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radixsort(t_list **a, t_list **b, int bitnum)
{
	int		i;
	int		len;
	int		j;
	t_list	*tmp;

	i = -1;
	len = ft_lstsize(*a);
	while (++i < bitnum)
	{
		j = 0;
		while (j++ < len)
		{
			tmp = *a;
			if (tmp->index >> i & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (ft_lstsize(*b))
			pa(a, b);
	}
}

int	biggerbits(int max)
{
	int	bitnum;

	bitnum = 0;
	while ((max >> bitnum) != 0)
		bitnum++;
	return (bitnum);
}
