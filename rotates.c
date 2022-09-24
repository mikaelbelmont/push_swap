#include "push_swap.h"

void rotate(t_list **stack)
{
	t_list	*tmp;
	
	tmp = (*stack)->next;
	ft_lstadd_back(&tmp, *stack);
	(*stack)->next = 0;
	*stack = tmp;
}

void ra(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void rb(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}