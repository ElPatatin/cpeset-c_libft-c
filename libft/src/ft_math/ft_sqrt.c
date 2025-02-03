/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:11:44 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:15:10 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_sqrt
 * @brief This function calculates the square root of a number.
 * 
 * @param nb The number to calculate the square root of.
 * @return int The square root of the number.
 * 
 * @dir ft_math/
 * @file ft_sqrt.c
 * @date 09-07-2022
 * @author cpeset-c
 */
int
	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i >= 46341)
			return (0);
		i++;
	}
	return (0);
}
