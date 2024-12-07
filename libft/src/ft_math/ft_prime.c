/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:11:39 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 16:43:02 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

/**
 * @name ft_prime
 * @brief Check if a number is prime.
 * 
 * @param nb The number to check.
 * @return int Return 1 if the number is prime, otherwise return 0.
 * 
 * @dir ft_math/
 * @file ft_prime.c
 * @date 09-07-2022
 * @author cpeset-c
 * 
 * @see ft_factorial | ft_find_next_prime
 */
int
	ft_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (FALSE);
	if (nb != 2 && (nb % 2) == 0)
		return (FALSE);
	while (++i <= (nb >> 1))
	{
		if ((nb % i) == 0)
			return (FALSE);
	}
	return (TRUE);
}
