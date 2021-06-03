/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:31 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/03 20:14:29 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p_dst;
	char	*p_src;

	p_dst = dst;
	p_src = (char *)src;
	i = 0;
	while (i < n)
	{
		*(p_dst + i) = *(p_src + i);
		i++;
	}
	return (dst);
}
