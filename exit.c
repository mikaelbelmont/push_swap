/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:28:07 by mbarreto          #+#    #+#             */
/*   Updated: 2022/10/05 16:24:50 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_end(t_list **stack, int i)
{
	t_list	*tmp;

	if (i)
		write(2, "Error\n", 6);
	if (stack)
	{
		if (*stack)
		{
			while (*stack)
			{
				tmp = (*stack);
				(*stack) = (*stack)->next;
				free(tmp);
			}
		}
	}
	exit(i);
}
