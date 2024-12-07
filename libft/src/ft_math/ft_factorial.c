/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:08:58 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 15:10:51 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

/**
 * @name ft_factorial
 * @brief Return the factorial of a number.
 * 
 * @param nb The number to get the factorial. (between 0 and 20)
 * @return t_ll The factorial of the number.
 * 
 * @dir ft_math/
 * @file ft_factorial.c
 * @date 09-07-2022
 * @author cpeset-c
 */
t_ll
	ft_factorial(t_ll nb)
{
	static t_ll	fact[21] = {
		1, 1, 2, 6, 24, 120, 720, 5040, 40320,
		362880, 3628800, 39916800, 479001600,
		6227020800, 87178291200, 1307674368000,
		20922789888000, 355687428096000, 6402373705728000,
		121645100408832000, 2432902008176640000
	};

	if (nb < 0 || nb > 20)
		return (0);
	return (fact[nb]);
}
