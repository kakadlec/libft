/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:43:14 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:58:13 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenate the string src to the end of dst.
 * It will concatenate at most size - strlen(dst) - 1 bytes,
 * NUL-terminating the result
 *
 * @param dst Destination array
 * @param src String to be appended to dst
 * @param size Maximum number of characters to be appended
 * @return The initial length of dst plus the length of src
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*dstc;
	const char		*src_start;
	unsigned int	dstc_length;
	unsigned int	remaing;

	dstc = dst;
	src_start = src;
	remaing = size;
	while (remaing-- != 0 && *dstc != '\0')
		dstc++;
	dstc_length = dstc - dst;
	remaing = size - dstc_length;
	if (remaing == 0)
		return (dstc_length + ft_strlen(src));
	while (*src != '\0')
	{
		if (remaing > 1)
		{
			*dstc++ = *src;
			remaing--;
		}
		src++;
	}
	*dstc = '\0';
	return (dstc_length + (src - src_start));
}
