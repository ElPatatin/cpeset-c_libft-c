/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:21:53 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:13:02 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_islower
 * @brief Check if the character is a lowercase letter.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a lowercase letter, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_islower.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_islower
 */
t_bool
	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (TRUE);
	return (FALSE);
}
