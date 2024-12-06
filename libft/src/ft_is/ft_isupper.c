/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:22:03 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:13:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"
/**
 * @name ft_isupper
 * @brief Check if the character is an uppercase letter.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is an uppercase letter, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_isupper.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_isupper
 */
t_bool
	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (TRUE);
	return (FALSE);
}
