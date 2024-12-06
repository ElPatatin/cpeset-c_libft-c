/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischrinstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:36:37 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:12:52 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_ischrinstr
 * @brief Check if the character is a letter or a number.
 * 
 * @param str The string to check.
 * @return t_bool Return TRUE if the character is a letter or a number, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_ischrinstr.c
 * @date 21-11-2022
 * @author cpeset-c
 * 
 * @see ft_strchr
 */
t_bool
	ft_ischrinstr(char *str)
{
	while (*str)
	{
		if (ft_strchr(&str[1], str[0]))
			return (TRUE);
		str++;
	}
	return (FALSE);
}
