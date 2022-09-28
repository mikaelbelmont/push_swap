#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "stdio.h"

#define INT_MAX	2147483647
#define INT_MIN -2147483648

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

void    ft_sorts(t_list **a, t_list **b);
void	sort2(t_list **a);
void	sort3(t_list **a);

void	ft_end(t_list **stack);

int		is_finished(t_list *stack);

#endif 