/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:11:35 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:36:53 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_memcmp
 * @brief Compare two memory areas.
 *
 * @param s1 The pointer to the first memory area.
 * @param s2 The pointer to the second memory area.
 * @param n The number of bytes to compare.
 * @return int Return an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.
 * 
 * @dir ft_mem/
 * @file ft_memcmp.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_memchr | ft_memmove | ft_memset
 */
int
	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
