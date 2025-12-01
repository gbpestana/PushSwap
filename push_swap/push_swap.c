#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**numbers;

	if (argc < 2)
		return(0);
	numbers = ft_parse_input(argc, argv);
	if (!ft_validate_args(numbers))
	{
		ft_free_split(numbers);
		ft_error_exit();
	}
	stack_a = ft_creat_stack(numbers);
	stack_b = NULL;
	ft_free_split(numbers);
	if (ft_has_duplicates(stack_a))
	{
		ft_free_stack(stack_a);
		return(0);
	}
	ft_sort_stack(&stack_a, &stack_b);
	ft_free_stack(stack_a);
	return(0);
}
