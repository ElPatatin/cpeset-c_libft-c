/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:59:52 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 14:56:41 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"
#include "libis.h"
#include "libstr.h"

/**
 * @name ft_atoi_base
 * @brief Convert a string to an integer according to a base.
 * 
 * @param str The string to convert.
 * @param str_base The base to convert the string.
 * @return int The converted integer.
 * 
 * @dir ft_math/
 * @file ft_atoi_base.c
 * @date 09-07-2022
 * @author cpeset-c
 * 
 * @see ft_atoi
 */
int
	ft_atoi_base(const char *str, char *str_base)
{
	int	res;
	int	neg;
	int	base;

	neg = 1;
	res = 0;
	if (ft_ischrinstr(str_base)
		|| (ft_strlen(str_base) < 2 && ft_strlen(str_base) > 16))
		return (0);
	base = ft_strlen(str_base);
	while (*str && ft_isspace(*str))
		str++;
	if (*str && ft_issign(*str))
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str && ft_strchr(str_base, *str))
	{
		res = res * base + (int)(ft_strchr(str_base, *str) - str_base);
		str++;
	}
	return (res * neg);
}
