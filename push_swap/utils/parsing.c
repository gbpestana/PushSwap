/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:34:04 by grodrig2          #+#    #+#             */
/*   Updated: 2025/12/01 12:40:12 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_safe_atoi( char *str, bool *error);
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
