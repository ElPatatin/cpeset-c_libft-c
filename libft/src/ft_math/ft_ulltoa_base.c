/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:53:48 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:15:30 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function converts an unsigned long long integer to a string in a
 * given base.
 *
 * @param nbr The number to convert.
 * @param str_base The base to convert the number to.
 * @return char* The string representation of the number in the given base.
 */
char
	*ft_ulltoa_base(t_ull nbr, char *str_base)
{
	char	*res;
	t_unt	len;
	int		base;

	res = NULL;
	if (ft_ischrinstr(str_base)
		|| (ft_strlen(str_base) < 2 && ft_strlen(str_base) > 16))
		return (NULL);
	base = ft_strlen(str_base);
	len = ft_unbrlen(nbr, base);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
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
