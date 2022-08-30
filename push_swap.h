#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "stdio.h"

typedef struct s_stack
{
	int		num;
	int		order;
	struct s_stack *next;
}	t_stack;

int ft_checker(t_stack *a, char **av);

#endif