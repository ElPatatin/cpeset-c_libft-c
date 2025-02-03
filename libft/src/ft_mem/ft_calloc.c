/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:11:05 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:36:04 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_calloc
 * @brief Allocate memory and set it to zeros.
 *
 * @param nmemb The number of elements to allocate.
 * @param size The size of each element.
 * @return void* Return a pointer to the allocated memory.
 * 
 * @dir ft_mem/
 * @file ft_calloc.c
 * @date 16-07-2022
 * @author cpeset-c
 */
void
	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		len;

	len = nmemb * size;
	if (len <= 0)
		len = 1;
	ptr = (void *)malloc(len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
