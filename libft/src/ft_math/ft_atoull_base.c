/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:33:32 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 15:03:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"
#include "libis.h"
#include "libstr.h"

/**
 * @name ft_atoull_base
 * @brief Convert a string to an unsigned long long integer according to a base.
 * 
 * @param str The string to convert.
 * @param str_base The base to convert the string.
 * @return t_ull The converted unsigned long long integer.
 * 
 * @dir ft_math/
 * @file ft_atoull_base.c
 * @date 16-01-2023
 * @author cpeset-c
 * 
 * @see ft_atoull
 */
t_ull
	ft_atoull_base(const char *str, char *str_base)
{
	t_ull	res;
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
