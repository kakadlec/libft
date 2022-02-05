/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakadlec <kakadlec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:54:10 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 09:58:35 by kakadlec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief If the character passed as an argument is an uppercase,
 * convert to lower
 *
 * @param c The character to convert
 * @return If c is a uppercase letter, returns its lowercase equivalent.
 * Otherwise, it returns c.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
