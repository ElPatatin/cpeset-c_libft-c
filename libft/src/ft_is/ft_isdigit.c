/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:06:40 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:12:57 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_isdigit
 * @brief Check if the character is a number.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a number, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_isdigit.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_isdigit
 */
t_bool
	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (TRUE);
	return (FALSE);
}
