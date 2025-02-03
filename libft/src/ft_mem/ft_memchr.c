/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:11:27 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:36:43 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_memchr
 * @brief Locate a character in a byte string.
 *
 * @param s The pointer to the memory area to search.
 * @param c The character to search.
 * @param n The number of bytes to search.
 * @return void* Return a pointer to the byte located, or NULL if no such byte exists within n bytes.
 * 
 * @dir ft_mem/
 * @file ft_memchr.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_memcmp | ft_memmove | ft_memset
 */
void
	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sptr;

	i = 0;
	sptr = (unsigned char *) s;
	while (i < n)
	{
		if (sptr[i] == (unsigned char) c)
			return (sptr + i);
		i++;
	}
	return (NULL);
}
