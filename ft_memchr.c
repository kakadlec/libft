/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:19:32 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:45:57 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans the initial n bytes of s for the first instance of c
 *
 * @param s Memory area s
 * @param c A character to search
 * @param n The number of bytes
 * @return void* A pointer to the matching byte or NULL if the character
 * does not occur in the given memory area
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*mem_area;
	size_t		i;

	mem_area = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (*(mem_area + i) == (char)c)
			return ((void *)mem_area + i);
		i++;
	}
	return (NULL);
}
