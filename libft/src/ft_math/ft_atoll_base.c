/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:58:22 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 15:03:47 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"
#include "libis.h"
#include "libstr.h"

/**
 * @name ft_atoll_base
 * @brief Convert a string to a long long integer according to a base.
 * 
 * @param str The string to convert.
 * @param str_base The base to convert the string.
 * @return t_ll The converted long long integer.
 * 
 * @dir ft_math/
 * @file ft_atoll_base.c
 * @date 18-10-2022
 * @author cpeset-c
 * 
 * @see ft_atoll
 */
t_ll
	ft_atoll_base(const char *str, char *str_base)
{
	t_ll	res;
	int		neg;
	int		base;

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
