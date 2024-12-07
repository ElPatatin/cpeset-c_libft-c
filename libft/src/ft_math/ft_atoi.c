/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:59:46 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 14:55:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"
#include "libis.h"

/**
 * @name ft_atoi
 * @brief Convert a string to an integer.
 * 
 * @param str The string to convert.
 * @return int The converted integer.
 * 
 * @dir ft_math/
 * @file ft_atoi.c
 * @date 09-07-2022
 * @author cpeset-c
 * 
 * @see ft_atoi_base
 */
int
	ft_atoi(const char *str)
{
	t_ll	res;
	int		neg;

	neg = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str && (ft_isdigit(*str)))
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * neg);
}
