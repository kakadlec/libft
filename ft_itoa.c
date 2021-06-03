/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:59:57 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/02 21:23:23 by kakadlec         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	int			i;
	unsigned	number;
	char		*buffer;

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
