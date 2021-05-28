/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:42:30 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/27 21:03:51 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src_copy;
	char	*dst_copy;
	size_t	i;

	i = 0;
	src_copy = (char *)src;
	dst_copy = (char *)dst;
	if (src_copy < dst_copy)
	{
		while ((int)(n - 1) >= 0)
		{
			*(dst_copy + n - 1) = *(src_copy + n - 1);
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			*(dst_copy + i) = *(src_copy + i);
			i++;
		}
	}
	return (dst);
}
