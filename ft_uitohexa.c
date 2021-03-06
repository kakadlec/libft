/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitohexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:51:57 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:46:19 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	is_space2(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		return (1);
	else
		return (0);
}

void	ft_translate2(unsigned int n, int radix, char *base, int *count)
{
	if (n > (unsigned long int)radix - 1)
		ft_translate2(n / radix, radix, base, count);
	*count += write(1, &(base[n % radix]), 1);
}

int	ft_is_invalid_base2(char *base)
{
	int	index;
	int	ocurr;

	index = 0;
	ocurr = 0;
	while (*base != '\0')
	{
		if (is_space2(base) || *base == '+' || *base == '-')
			return (1);
		else
		{
			while (base[index] != '\0')
			{
				if (base[index] == *base)
					ocurr++;
				index++;
			}
			if (ocurr > 1)
				return (1);
			ocurr = 0;
			index = 0;
		}
		base++;
	}
	return (0);
}

int	ft_uitohexa(unsigned int n, char *base)
{
	int	radix;
	int	count;
	int	*ptr_count;

	count = 0;
	ptr_count = &count;
	radix = ft_strlen(base);
	if (radix <= 1)
		return (count);
	if (ft_is_invalid_base2(base))
		return (count);
	ft_translate2(n, radix, base, ptr_count);
	return (count);
}
