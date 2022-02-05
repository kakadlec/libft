/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:09:38 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:57:29 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates enough space for count objects that are size
 * bytes of memory each, and returns a pointer to the allocated memory.
 * The allocated memory is filled with bytes of value zero
 *
 * @param nmemb Number of elements to be allocated
 * @param size Size of elements
 * @return A pointer to the allocated memory, or NULL if the request fails
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
