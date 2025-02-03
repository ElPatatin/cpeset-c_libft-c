/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:13:29 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:37:42 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_memset
 * @brief Fill memory with a constant byte.
 *
 * @param b The pointer to the memory area to fill.
 * @param c The byte to fill the memory area.
 * @param len The number of bytes to fill.
 * @return void* Return a pointer to the memory area.
 * 
 * @dir ft_mem/
 * @file ft_memset.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_bzero | ft_memcpy | ft_memmove
 */
void
	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*t;

	t = (unsigned char *) b;
	while (len-- > 0)
		*t++ = c;
	return (b);
}
