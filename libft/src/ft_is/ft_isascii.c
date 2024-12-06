/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:02:43 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:12:44 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_isascii
 * @brief Check if the character is a ASCII character.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a ASCII character, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_isascii.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_isprint
 */
t_bool
	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (TRUE);
	return (FALSE);
}
