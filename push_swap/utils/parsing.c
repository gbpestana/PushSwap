/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:34:04 by grodrig2          #+#    #+#             */
/*   Updated: 2025/12/01 16:10:22 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_safe_atoi( char *str, bool *error)
{
	long	num;
	int		sig;
	int		i;

	num = 0;
	sig = 1;
	i = 0;
	*error = false;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sig = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if ((sig == 1 && num > INT_MAX) || sig == -1 && num > 2147483648)
		{
			*error = true;
			return (0);
		}
		i++;
	}
	return ((int)num * sig);
}

char	**ft_split_args(char *str);
void	ft_free_split(char **split);

char	**ft_parse_input(int argc, char **argv)
{
	char	*joined;
	char	**result;

	if (argc == 2)
		return (ft_split(argv[1], ' '));
	joined = ft_join_args(argc, argv);
	result = ft_split(joined, ' ');
	free(joined);
	return (result);
}
