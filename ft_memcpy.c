/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:31 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/06 14:27:03 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
