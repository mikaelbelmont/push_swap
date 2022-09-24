#include "push_swap.h"

void sort2(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

void sort3(t_list **a)
{
	int	num[3];

	num[0] = (*a)->index;
	num[1] = (*a)->next->index;
	num[2] = (*a)->next->next->index;
	if ((num[2] == INT_MAX || num[2] == INT_MIN) && num[0] > num[1])
		swap(a);
	else if (num[2] != INT_MAX && num[2] != INT_MIN && num[0] < num[1])
		swap(a);
	if (is_finished(*a))
		return ;
	if (num[2] == INT_MIN)
		rra(a);
	else
		rotate_a(a);
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