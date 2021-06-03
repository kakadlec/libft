/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:31 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/03 20:14:52 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (*(p_src + i) == c)
			return (p_dst + i + 1);
		i++;
	}
	return (NULL);
}
