/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:30:29 by kakadlec          #+#    #+#             */
/*   Updated: 2021/06/05 16:54:23 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_newstr(unsigned int start, size_t size_s, size_t len)
{
	char	*new_str;
	size_t	last_index;

	if (start > size_s)
		last_index = 0;
	else if (size_s - start < len)
		last_index = size_s - start;
	else
		last_index = len;
	new_str = ft_calloc(last_index + 1, sizeof(char));
	if (new_str)
		new_str[last_index] = 0;
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
size_t	count;
	size_t	size_s;
	char	*new_str;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	new_str = get_newstr(start, size_s, len);
	if (new_str)
	{
		count = 0;
		if (start <= ft_strlen(s))
		{
			while (count < len && s[start + count])
			{
				new_str[count] = s[start + count];
				count++;
			}
		}
	}
	return (new_str);
}
