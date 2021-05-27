/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:51:35 by kakadlec          #+#    #+#             */
/*   Updated: 2021/05/26 22:30:01 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;

	size = ft_strlen(s);
	i = size;
	while (i > 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
