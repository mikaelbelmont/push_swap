/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:09:56 by mbarreto          #+#    #+#             */
/*   Updated: 2022/09/30 14:19:48 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknum(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if ((av[i][j] == '-' || av[i][j++] == '+') && !av[i][j])
			return (0);
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_printlist(t_list *stack)
{
	t_list *tmp = stack;
	
	while (tmp != 0)
	{
		printf("%d - ", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = 0;
	b = 0;
	if (ac < 2)
		exit(0);
	ft_checker(&a, av);
	ft_index(&a);
	ft_sorts(&a, &b);
	ft_printlist(a);
	ft_end(&a);
	return (0);
}
