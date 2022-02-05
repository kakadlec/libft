/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:42:30 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:45:59 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies len bytes from the memory of src to dst.
 * Memories may overlap. First, the bytes in src are copied
 * into a temporary array and then to dst.
 *
 * @param dst Memory area dst
 * @param src Memory ares src
 * @param n The number of bytes
 * @return A pointer to the memory area dst
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src_copy;
	char	*dst_copy;
	size_t	i;

	i = -1;
	src_copy = (char *)src;
	dst_copy = (char *)dst;
	if (!dst_copy && !src_copy)
		return (NULL);
	if (src_copy < dst_copy)
	{
		while ((int)(n - 1) >= 0)
		{
			*(dst_copy + n - 1) = *(src_copy + n - 1);
			n--;
		}
	}
	else
		while (++i < n)
			*(dst_copy + i) = *(src_copy + i);
	return (dst);
}
