/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:24:59 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/14 22:25:09 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

/**
 * @name ft_lcm
 * @brief Calculate the least common multiple of two numbers.
 * gcd means Greatest Common Divisor
 * 
 * @param a The first number.
 * @param b The second number.
 * @return t_unt The least common multiple of the two numbers.
 * 
 * @dir ft_math/
 * @file ft_lcm.c
 * @date 18-07-2022
 * @author cpeset-c
 */
t_unt
	ft_gcd(t_unt a, t_unt b)
{
	while (b != 0)
	{
		t_unt temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}