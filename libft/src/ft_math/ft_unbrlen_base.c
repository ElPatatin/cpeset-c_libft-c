/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:53:08 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:15:41 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function calculates the length of an unsigned number in a given
 * base.
 * 
 * @param nbr The number to calculate the length of.
 * @param base The base to calculate the length in.
 * @return t_unt The length of the number in the given base.
 */
t_unt
	ft_unbrlen_base(t_ull nbr, int base)
{
	t_unt	len;

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
