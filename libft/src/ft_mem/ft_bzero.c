/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:10:58 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:33:30 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_bzero
 * @brief Write zeroes to a byte string.
 *
 * @param s The pointer to the memory area to write.
 * @param n The number of bytes to write.
 * @return void
 * 
 * @dir ft_mem/
 * @file ft_bzero.c
 * @date 16-07-2022
 * @author cpeset-c
 */
void
	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = 0;
}
