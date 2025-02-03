/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:00:16 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:14:55 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_nbrlen
 * @brief This function calculates the length of a number.
 * 
 * @param nbr The number to calculate the length of.
 * @return int The length of the number.
 * 
 * @dir ft_math/
 * @file ft_nbrlen.c
 * @date 09-07-2022
 * @author cpeset-c
 */
int
	ft_nbrlen(t_ll nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
			nbr /= 10;
			len++;
	}
	return (len);
}
