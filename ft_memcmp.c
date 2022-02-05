/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:43:09 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:57:52 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares byte string s1 against byte string s2
 *
 * @param s1 Memory area s1
 * @param s2 Memory area s2
 * @param n The number of byte
 * @return < 0 if s1 is less than s2, > 0 if s1 is graeter than s2,
 * = 0 if s1 is equal to s2
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(s1_copy + i) != *(s2_copy + i))
			return (*(s1_copy + i) - *(s2_copy + i));
		i++;
	}
	return (0);
}
