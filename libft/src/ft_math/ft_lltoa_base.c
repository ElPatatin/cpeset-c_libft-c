/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:03:21 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:14:24 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_lltoa_base
 * @brief This function converts a long long integer to a string in a given base.
 *
 * @param nbr The number to convert.
 * @param str_base The base to convert the number to.
 * @return char* The string representation of the number in the given base.
 * 
 * @dir ft_math/
 * @file ft_lltoa_base.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_lltoa_base(t_ll nbr, char *str_base)
{
	char	*res;
	t_unt	len;
	int		base;

	res = NULL;
	if (ft_ischrinstr(str_base)
		|| (ft_strlen(str_base) < 2 && ft_strlen(str_base) > 16))
		return (NULL);
	base = ft_strlen(str_base);
	len = ft_nbrlen_base(nbr, base);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (nbr < 0)
		res[0] = '-';
	else if (nbr == 0)
		res[0] = '0';
	while (nbr)
	{
		--len;
		res[len] = str_base[ft_absval(nbr % base)];
		nbr /= base;
	}
	return (res);
}
