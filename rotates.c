#include "push_swap.h"

void rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	first = *stack;
	second = (*stack)->next;
	while ((*stack)->next)
		(*stack) =(*stack)->next;
	(*stack)->next = first;
	*stack = second;
	first->next = 0;
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