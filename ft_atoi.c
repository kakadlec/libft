/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:40:43 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/26 22:25:34 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' '
		|| *nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signal = signal * -1;
		nptr++;
	}
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		result = result * 10;
		result = result + *nptr - '0';
		nptr++;
	}
	return (result * signal);
}
