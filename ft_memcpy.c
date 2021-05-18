/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:31 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/17 22:04:30 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_dest;
	char	*p_src;

	p_dest = dest;
	p_src = (char *)src;
	i = 0;
	while (i < n)
	{
		*(p_dest + i) = *(p_src + i);
		i++;
	}
	return (dest);
}
