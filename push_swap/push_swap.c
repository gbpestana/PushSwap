#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	char *nbr;
	t_list lst;

	if (argc == 2)
	{
		i = 0;
		nbr = ft_split(argv[1]);
		while (nbr[i])
		{
			//add new node
			lst.data = ft_atoi(nbr[i]);
			i++;
		}
	}
}
