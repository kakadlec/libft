/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:53:06 by kakadlec          #+#    #+#             */
/*   Updated: 2022/02/05 12:46:17 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief If the character passed as an argument is a lowercase,
 * convert to upper
 *
 * @param c The character to convert
 * @return int If c is a lowercase letter, returns its uppercase equivalent.
 * Otherwise, it returns c.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
