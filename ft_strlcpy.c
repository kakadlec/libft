/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:17:37 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/26 22:27:37 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src[i] == '\0')
		return (i);
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == '\0' && i == size)
		dst[i - 1] = '\0';
	else if (i < size)
		dst[i] = '\0';
	else
	{
		dst[i - 1] = '\0';
		while (src[i] != '\0')
			i++;
	}
	return (i);
}
