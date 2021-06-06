/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:01:39 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/06 15:40:14 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lookup(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_lookup(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_lookup(s1[end - 1], set))
		end--;
	copy = malloc((end - start + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (start < end)
		copy[i++] = s1[start++];
	copy[i] = 0;
	return (copy);
}
