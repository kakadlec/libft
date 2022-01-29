/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:30:29 by kakadlec          #+#    #+#             */
/*   Updated: 2022/01/29 14:22:30 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Get a substring of a string
 *
 * @param s The string
 * @param start The start point
 * @param len How much bytes to copy (1 byte = 1 char)
 * @return Return a new pointer to the substring ***Needs Free***
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		size = 0;
	else if (ft_strlen(s) - start < len)
		size = ft_strlen(s) - start;
	else
		size = len;
	str = ft_strnew(size);
	if (!str)
		return (NULL);
	while (*(s + start) && i < size)
	{
		*(str + i) = *(s + start);
		start++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
