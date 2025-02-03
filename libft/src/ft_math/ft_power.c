/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:00:31 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:15:02 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_pow
 * @brief This function calculates the power of a number.
 * 
 * @param n The number to calculate the power of.
 * @param pow The power to raise the number to.
 * @return t_ll The result of the power operation.
 * 
 * @dir ft_math/
 * @file ft_power.c
 * @date 09-07-2022
 * @author cpeset-c
 */
t_ll
	ft_pow(t_ll n, t_unt pow)
{
	if (pow == 0)
		return (1);
	return (n * ft_pow(n, pow - 1));
}
