/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:45:20 by grodrig2          #+#    #+#             */
/*   Updated: 2026/01/20 14:20:42 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	check_arg(char *arg, char **args, int i)
{
	long long	tmp;

	if (!arg || arg[0] == '\0')
		ft_error("Error");
	tmp = ft_atoi(arg);
	if (!ft_isnum(args[i]))
		ft_error("Error");
	if (ft_contains(tmp, args, i))
		ft_error("Error");
	if (tmp < -2147483648 || tmp > 2147483647)
		ft_error("Error");
}

void	ft_check_args(int argc, char **argv)
{
	int			i;
	char		**args;	

	i = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args || !args[0])
			ft_error("Error");
	}
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		check_arg(args[i], args, i);
		i++;
	}
	if (argc == 2)
		ft_free_split(args);
}
