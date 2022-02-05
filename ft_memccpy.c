/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:31 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:57:46 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dst,
 * stopping when the character c is found, or after n characters are copied,
 * whichever comes first. If copying takes place between objects that
 * overlap, the behavior is undefined.
 *
 * @param dst Memory area dst
 * @param src Memory area src
 * @param c A character to search
 * @param n Number of bytes that memccpy() copied
 * @return A pointer to the next character in dst after c,
 * or NULL if c was not found in the first n bytes
 */
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(p_dst + i) = *(p_src + i);
		if (*(p_src + i) == (unsigned char)c)
			return (p_dst + i + 1);
		i++;
	}
	return (NULL);
}
