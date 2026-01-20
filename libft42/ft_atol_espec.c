/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_espec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:45:37 by grodrig2          #+#    #+#             */
/*   Updated: 2026/01/20 16:53:52 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol_espec(const char *nptr)
{
	long	nbr;
	int		signal;

	nbr = 0;
	signal = 1;
	while (((*nptr >= 9) && (*nptr <= 13)) || (*nptr == 32))
		nptr++;
	if (*nptr == '-')
	{
		if (!ft_isdigit(*(nptr + 1)))
			return (21474836470);
		signal *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit((int)*nptr))
	{
		nbr = (nbr * 10) + ((int)*nptr - '0');
		nptr++;
	}
	return (nbr * (long)signal);
}
