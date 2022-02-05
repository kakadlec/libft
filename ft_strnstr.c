/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:23:07 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:58:24 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate substring, where not more than 'len' characters
 * are searched. Finds the first occurrence of the substring 'little'
 * in the string 'big'.
 * The terminating null bytes ('\0') are not compared.
 *
 * @param big String to be scanned
 * @param little The small string to be searched in 'big' string
 * @param len The maximum amount of characters to be searched
 * @return A pointer to the first character of the first occurrence
 * of little is returned. NULL if the substring is not found.
 * If 'little' is an empty string, 'big' is returned
 */
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
