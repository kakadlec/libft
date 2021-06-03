/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:30:29 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/03 19:14:56 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*(s + start) && i < len)
	{
		*(str + i) = *(s + start);
		start++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
