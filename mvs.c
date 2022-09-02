#include "push_swap.h"

void   sa(t_list **a)
{
	int	tmp;

	tmp = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = tmp;
	printf("sa\n");
}

//void   sb(t_list **b)
//{
//	int	tmp;
//
//	tmp = *b->content;
//	*b->content = *b->next;
//	b->next = tmp;
//}
