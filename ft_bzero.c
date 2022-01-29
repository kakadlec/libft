/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:28 by kakadlec          #+#    #+#             */
/*   Updated: 2022/01/29 14:34:29 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Erases the data in the n bytes of the memory
 *
 * @param s Starting point
 * @param n Number of bytes
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
