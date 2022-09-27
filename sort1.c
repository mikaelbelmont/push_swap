#include "push_swap.h"

void sort2(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
	return ;
}

void sort3(t_list **a)
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

void sort4(t_list **a, t_list **b)
{

}

void ft_sorts(int ac, t_list **a, t_list **b)
{
	if (ac == 3)
	{
		sort2(&a);
		return ;
	}
	if (ac == 4)
	{
		sort3(&a);
		return ;
	}

	else
		sort_big();
	return ;
}