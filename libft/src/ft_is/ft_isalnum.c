/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:51:37 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:13:28 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_isalnum
 * @brief Check if the character is a letter or a number.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a letter or a number, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_isalnum.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_isalpha | ft_isdigit
 */
t_bool
	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (TRUE);
	return (FALSE);
}
