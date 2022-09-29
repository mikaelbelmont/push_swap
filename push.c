#include "push_swap.h"

void	push(t_list **dst, t_list **src)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = (*dst);
	tmp2 = (*src)->next;
	ft_lstadd_front(dst, *src);
	(*dst)->next = (*dst);
	(*src) = (*src)->next;

}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	write(1, "pb\n", 3);
}