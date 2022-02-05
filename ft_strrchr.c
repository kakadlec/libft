/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:51:35 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:46:14 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of 'c' in the string pointed
 * to by 's'. The terminating null character is considered to be
 * part of the string, therefore if 'c' is '\0', locates the
 * terminating '\0'
 *
 * @param s Pointer to string
 * @param c Character to be located
 * @return A pointer to the last occurrence of the character c
 * in the string or NULL if the character is not found
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;

	size = ft_strlen(s);
	i = size;
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
