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

void sort_big(t_list **a, t_list **b)
{
	
}

void ft_sorts(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
	{
		sort2(a);
		return ;
	}
	if (ft_lstsize(*a) == 3)
	{
		sort3(a);
		return ;
	}
	if (ft_lstsize(*a) == 4)
	{
		sort4(a, b);
		return ;
	}
	else
	{
		sort_big(a, b);
		return ;
	}
	return ;
}