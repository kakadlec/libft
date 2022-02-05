/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:04:04 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:58:04 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		words++;
		while (*s && *s == c)
			s++;
	}
	return (words + 1);
}

static int	ft_strsublen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

/**
 * @brief Allocates (with malloc) and returns an array of strings obtained
 * by splitting s using the character 'c' as a delimiter.
 * The array must be ended by a NULL pointer
 *
 * @param s The string to be split
 * @param c The delimiter character
 * @return The array of new strings result of the split.
 * NULL if the allocation fails
 */
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	size_t	i;

	if (!s)
		return (NULL);
	split = ft_calloc(ft_count_words(s, c), sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	start = -1;
	while (s[++start])
	{
		if (s[start] != c && s[start] != '\0')
		{
			split[i] = ft_substr(s, start, ft_strsublen(&s[start], c));
			i++;
			start += ft_strsublen(&s[start], c) - 1;
		}
	}
	split[i] = NULL;
	return (split);
}
