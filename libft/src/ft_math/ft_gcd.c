/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:24:59 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:10:59 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

/**
 * @name ft_gcd
 * @brief This function calculates the Greatest Common Divisor of two numbers.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return t_unt The least common multiple of the two numbers.
 * 
 * @dir ft_math/
 * @file ft_gcd.c
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