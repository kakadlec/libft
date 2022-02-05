/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:31 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:57:54 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory of dst.
 * The memory areas must not overlap.
 * Use ft_memmove if the memory areas do overlap.
 *
 * @param dst Memory area dst
 * @param src Memory area src
 * @param n The number of bytes
 * @return A pointer to the memory area dst
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p_dst;
	char	*p_src;

	i = 0;
	p_dst = dst;
	p_src = (char *)src;
	if (!p_dst && !p_src)
		return (0);
	if (n == 0)
		return (dst);
	while (i < n)
	{
		*(p_dst + i) = *(p_src + i);
		i++;
	}
	return (dst);
}
