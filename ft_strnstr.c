/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:23:07 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/26 22:29:06 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		found;

	i = -1;
	if (!ft_strlen(little))
		return ((char *)big);
	while (*(big + ++i) && i < len)
	{
		j = 0;
		if (*(big + i) == *(little + 0))
		{
			k = i;
			found = 1;
			while (*(big + k) && *(little + j) && j < len && k < len)
				if (*(big + k++) != *(little + j++))
					found = 0;
			if (found && !*(little + j))
				return ((char *)big + i);
		}
	}
	return (NULL);
}
