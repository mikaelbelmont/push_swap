#include "push_swap.h"

void ft_end(t_list **stack)
{
	t_list	*tmp;

	if (stack)
	{
		if (*stack)
		{
			while (*stack)
			{
				tmp = (*stack);
				(*stack) = (*stack)->next;
				free(tmp);
			}
		}
	}
	exit(0);
}
