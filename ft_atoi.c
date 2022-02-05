/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:40:43 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:45:43 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc) and returns a string representing the
 * integer received as an argument.
 *
 * @param nptr The integer to convert
 * @return int The string representing the integer. NULL if the
 * allocation fails.
 */
int	ft_atoi(const char *nptr)
{
	long int	result;
	int			signal;

	result = 0;
	signal = 1;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		result = result * 10;
		result = result + *nptr - '0';
		nptr++;
		if (result > 2147483647 && signal == 1)
			return (-1);
		if (result > 2147483648 && signal == -1)
			return (0);
	}
	return ((int)(result * signal));
}
