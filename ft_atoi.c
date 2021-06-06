/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:40:43 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/06 15:43:39 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
