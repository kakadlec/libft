/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:04:04 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/30 16:59:12 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int ft_count_words(char const *s, char c)
{
	int	i;
	int words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		if (s[i])
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	int		start;
	int		count;
	int		k;
	char	**splitted;

	count = 0;
	start = 0;
	k = 0;
	len = ft_strlen(s) + 1;
	if (!(splitted = malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (count < (int)len)
	{
		if (*(s + count) == c || *(s + count) == '\0')
		{
			splitted[k] = malloc(sizeof(char) * (count - start));
			splitted[k] = ft_substr(s, start, count - start);
			k++;
			start = count + 1;
		}
		count++;
	}
	return (splitted);
}
