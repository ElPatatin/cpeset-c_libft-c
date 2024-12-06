/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:07:14 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:13:07 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_isprint
 * @brief Check if the character is a printable character.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a printable character, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_isprint.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_isprint
 */
t_bool
	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (TRUE);
	return (FALSE);
}
