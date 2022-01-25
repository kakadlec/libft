/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulitohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:51:57 by kakadlec          #+#    #+#             */
/*   Updated: 2021/11/07 22:42:07 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	is_space(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		return (1);
	else
		return (0);
}

void	ft_translate(unsigned long int n, int radix, char *base, int *count)
{
	if (n > (unsigned long int)radix - 1)
		ft_translate(n / radix, radix, base, count);
	*count += write(1, &(base[n % radix]), 1);
}

int	ft_is_invalid_base(char *base)
{
	int	index;
	int	ocurr;

	index = 0;
	ocurr = 0;
	while (*base != '\0')
	{
		if (is_space(base) || *base == '+' || *base == '-')
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

int	ft_ulitohexa(unsigned long int n, char *base)
{
	int	radix;
	int	count;
	int	*ptr_count;

	radix = ft_strlen(base);
	count = 0;
	ptr_count = &count;
	if (radix <= 1)
		return (count);
	if (ft_is_invalid_base(base))
		return (count);
	ft_translate(n, radix, base, ptr_count);
	ptr_count = NULL;
	return (count);
}
