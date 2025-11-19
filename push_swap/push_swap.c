#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int j;
	char **numbers;
	t_list **lst_a;

	i = 1;
	while (i < argc)
	{
		j = 0;
		numbers = ft_split(argv[i], ' ');
		i++;
		while (numbers[j])
		{
			if (ft_is_nbr(numbers[j]))
			{
				*lst_a = ft_atoi(numbers[j]);
			}
		}
	}
}
