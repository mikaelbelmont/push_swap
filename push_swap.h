/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:32:46 by mbarreto          #+#    #+#             */
/*   Updated: 2022/10/04 19:48:10 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "stdio.h"
# include <limits.h>

void	ft_checker(t_list **a, char **av);

void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

void	sort2(t_list **a);
void	sort3(t_list **a);
void	sort4(t_list **a, t_list **b);
void	sort5(t_list **a, t_list **b);
void	sort_big(t_list **a, t_list **b);

void    ft_radixsort(t_list **a, t_list **b, int bitnum);
int     biggerbits(int max);

void	ft_index(t_list **a);
void	extremes(t_list *a, int *max, int *min);

void	ft_end(t_list **stack);
int     ft_finished(t_list *stack);

void	checknull(char **str);
void	ft_printlist(t_list *stack); // extra

#endif 