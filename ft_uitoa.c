/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:59:57 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:46:18 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chars(unsigned int n)
{
	int				i;
	unsigned int	number;

	i = 1;
	number = n;
	while (number > 9)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	int				i;
	unsigned int	number;
	char			*buffer;

	i = chars(n);
	number = n;
	buffer = (char *)malloc(sizeof(char) * (i + 1));
	if (!buffer)
		return (NULL);
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
