/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:00:08 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:11:32 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"
#include "libmem.h"
#include "libis.h"
#include "libstr.h"

/**
 * @name ft_itoa_base
 * @brief Convert an integer to a string with a specific base.
 * 
 * @param nbr The integer to convert.
 * @param str_base The base to convert the integer.
 * @return char* The string representation of the integer.
 * 
 * @dir ft_math/
 * @file ft_itoa_base.c
 * @date 09-07-2022
 * @author cpeset-c
 * 
 * @see ft_itoa
 */
char
	*ft_itoa_base(int nbr, char *str_base)
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

int main(void)
{
	char *str_base = "0123456789ABCDEF";
	int nbr = 42;
	printf("%s\n", ft_itoa_base(nbr, str_base));
	return (0);
}
