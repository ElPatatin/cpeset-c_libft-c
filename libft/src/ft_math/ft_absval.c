/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absval.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:59:37 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 13:29:34 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

/**
 * @name ft_absval
 * @brief Return the absolute value of a number.
 * 
 * @param n The number to get the absolute value.
 * @return t_ll The absolute value of the number.
 * 
 * @dir ft_math/
 * @file ft_absval.c
 * @date 09-07-2022
 * @author cpeset-c
 */
t_ll
	ft_absval(t_ll n)
{
	if (n < 0)
		n = -n;
	return (n);
}
