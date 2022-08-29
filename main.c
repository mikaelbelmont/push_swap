#include "push_swap.h"

int	checknum(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
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

int	checkdups(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strlen(av[i]) == ft_strlen(av[j]))
			{
				if (strcmp(av[i], av[j]) == 0)
				{
					write(1, "Error\n", 6);
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}

int main (int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (!checknum(av) || !checkdups(av))
		exit (0);
	a = 0;
	b = 0;
	if (ac < 2)
		exit (0);
	init_args(&a, av);
	exit(0);
	

	return (0);
}

