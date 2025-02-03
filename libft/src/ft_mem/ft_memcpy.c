/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:11:46 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:36:59 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_memcpy
 * @brief Copy memory area.
 *
 * @param dst The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param n The number of bytes to copy.
 * @return void* Return a pointer to the destination memory area.
 * 
 * @dir ft_mem/
 * @file ft_memcpy.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_memccpy | ft_memmove | ft_memset
 */
void
	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}
