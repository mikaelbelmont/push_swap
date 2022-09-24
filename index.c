#include "push_swap.h"

void ft_index(t_list **a)
{
	t_list	*tmp;
	int		i;
	int		count;

	i = 0;
	while (i++ < ft_lstsize(*a))
	{
		tmp = *a;
		count = 2147483647;
		while (tmp)
		{
			if (count > tmp->content && tmp->index == 0)
				count = tmp->content;
			tmp = tmp->next;
		}
		tmp = *a;
		while (tmp && tmp->content != count)
			tmp = tmp->next;
		tmp->index = i;
	}

}
