/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:40:16 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:10:50 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

/**
 * @name ft_lcm
 * @brief Calculate the Least Common Multiple of two numbers.
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
	ft_lcm(t_unt a, t_unt b)
{
	if (!a || !b)
		return (0);
	return (a / ft_gcd(a, b) * b);
}
