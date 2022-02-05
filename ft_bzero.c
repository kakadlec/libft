/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:30:28 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:57:27 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Erases the data in the "n" bytes of the memory starting at
 * the location pointed by "s" writing zeroes
 *
 * @param s The string on which to operate
 * @param n The number of bytes
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
