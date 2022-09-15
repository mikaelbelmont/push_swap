#include "push_swap.h"

int	ft_finished(t_list *stack)
{
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return(0);
		stack = stack->next;
	}
	return (1);
}