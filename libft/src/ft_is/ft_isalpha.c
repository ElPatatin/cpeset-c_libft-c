/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:37:04 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:12:38 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_isalpha
 * @brief Check if the character is a letter.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a letter, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_isalpha.c
 * @date 09-05-2022
 * @author cpeset-c
 * 
 * @see ft_islower | ft_isupper
 */
t_bool
	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (TRUE);
	return (FALSE);
}
