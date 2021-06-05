/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:04:04 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/05 18:46:39 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
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
