/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:09:04 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 16:43:22 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

/**
 * @name ft_find_next_prime
 * @brief Find the next prime number.
 * 
 * @param nb The number to start the search.
 * @return int The next prime number.
 * 
 * @dir ft_math/
 * @file ft_find_next_prime.c
 * @date 09-07-2022
 * @author cpeset-c
 * 
 * @see ft_prime
 */
int
	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (nb <= INT_MAX)
	{
		if (ft_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
