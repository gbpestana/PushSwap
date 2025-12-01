/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:28:26 by grodrig2          #+#    #+#             */
/*   Updated: 2025/12/01 16:12:50 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	ft_is_valid_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (false);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	ft_is_in_int_range(char *str)
{
	long	num;

	num = ft_atol(str);
	return (num >= INT_MIN && num <= INT_MAX);
}

bool	ft_has_duplicates(t_list *stack)
{
}

bool	ft_validate_args(char **numbers);
