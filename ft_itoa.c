/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:59:57 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:45:49 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chars(int n)
{
	int				i;
	unsigned int	number;

	i = 1;
	number = n;
	if (n < 0)
	{
		i = 2;
		number = -n;
	}
	while (number > 9)
	{
		number /= 10;
		i++;
	}
	return (i);
}

/**
 * @brief Allocates (with malloc) and returns a string representing
 * the integer received as an argument.
 *
 * @param n The integer to convert
 * @return The string representing the integer.
 * NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	int				i;
	unsigned int	number;
	char			*buffer;

	i = chars(n);
	number = n;
	buffer = (char *)malloc(sizeof(char) * (i + 1));
	if (!buffer)
		return (NULL);
	if (n < 0)
	{
		number = -n;
		buffer[0] = '-';
	}
	buffer[i] = 0;
	buffer[i - 1] = '0';
	while (number > 0)
	{
		i--;
		buffer[i] = number % 10 + '0';
		number /= 10;
	}
	return (buffer);
}
