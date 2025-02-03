/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:13:19 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:37:35 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_memmove
 * @brief Copy memory area. The memory areas may overlap. The copy is always
 * done in a non-destructive manner.
 *
 * @param dst The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param len The number of bytes to copy.
 * @return void* Return a pointer to the destination memory area.
 * 
 * @dir ft_mem/
 * @file ft_memmove.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_memccpy | ft_memcpy | ft_memset
 */
void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;

	count = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{	
		while (count < len)
		{
			*((char *)(dst + count)) = *((char *)(src + count));
			count++;
		}
	}
	else
	{
		while (0 < len)
		{
			*((char *)((dst - 1) + len)) = *((char *)((src - 1) + len));
			len--;
		}
	}
	return (dst);
}
