/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:09:56 by mbarreto          #+#    #+#             */
/*   Updated: 2022/08/30 17:22:59 by mbarreto         ###   ########.fr       */
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

int main(int ac, char **av)
{
	t_list	*a;
	//t_list	*b;

	a = 0;
	//b = 0;
	if (ac < 2)
	{
		printf("Pass at least 2 parameters\n");
		exit(0);
	}
	if (!ft_checker(&a, av))
	{
		printf("isso e um teste\n");
		exit (0);
	}
	if (ac == 3)
		sort2(&a);
	return (0);
}
