/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:04:04 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/05 17:57:43 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words + 1);
}

static int	ft_strsublen(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;

	if (!s)
		return (NULL);
	split = (char **)malloc(ft_count_words(s, c) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			split[i] = malloc(sizeof(char *) * (ft_strsublen(s, c) + 1));
			if (split[i])
				ft_strlcpy(split[i++], s, ft_strsublen(s, c) + 1);
			s += ft_strsublen(s, c);
		}
	}
	split[i] = 0;
	return (split);
}
