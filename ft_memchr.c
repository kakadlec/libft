/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:19:32 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/22 11:41:37 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
