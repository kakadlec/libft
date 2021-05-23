/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:43:14 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/23 14:49:50 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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