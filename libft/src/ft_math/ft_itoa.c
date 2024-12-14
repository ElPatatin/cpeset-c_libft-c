/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:00:02 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/09 12:56:10 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"
#include "libmem.h"

/**
 * @name ft_itoa
 * @brief Convert an integer to a string.
 * 
 * @param nbr The integer to convert.
 * @return char* The string representation of the integer.
 * 
 * @dir ft_math/
 * @file ft_itoa.c
 * @date 09-07-2022
 * @author cpeset-c
 * 
 * @see ft_itoa_base
 */
char
	*ft_itoa(int nbr)
{
	char	*res;
	int		len;

	len = ft_nbrlen(nbr);
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (nbr < 0)
		res[0] = '-';
	else if (nbr == 0)
		res[0] = '0';
	while (nbr)
	{
		--len;
		res[len] = ft_absval(nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}
