/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:11:41 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:13:17 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_isspace
 * @brief Check if the character is a space.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a space, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_isspace.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_isspace
 */
t_bool
	ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (TRUE);
	return (FALSE);
}
