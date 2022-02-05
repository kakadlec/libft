/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:34 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:58:00 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill with "n" bytes of "c" the memory of "s"
 *
 * @param s The string on which to operate
 * @param c Value c (converted to an unsigned char)
 * @param n The number of bytes
 * @return A pointer to the memory area s
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
