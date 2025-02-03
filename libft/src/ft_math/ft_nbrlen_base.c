/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:00:24 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:14:16 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_nbrlen_base
 * @brief This function calculates the length of a number in a given base.
 * 
 * @param nbr The number to calculate the length of.
 * @param base The base to calculate the length in.
 * @return int The length of the number in the given base.
 * 
 * @dir ft_math/
 * @file ft_nbrlen_base.c
 * @date 09-07-2022
 * @author cpeset-c
 */
int
	ft_nbrlen_base(t_ll nbr, int base)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
			nbr /= base;
			len++;
	}
	return (len);
}
