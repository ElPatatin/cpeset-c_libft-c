/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:41:15 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:37:15 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_memfree
 * @brief Free the memory and set the pointer to NULL.
 * 
 * @param ptr The pointer to the memory to free.
 * @param len The number of pointers to free.
 * @return void* Return NULL.
 * 
 * @dir ft_mem/
 * @file ft_memfree.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_delete | ft_memdel
 */
void
	**ft_memfree(char **ptr, int len)
{
	while (len > -1)
	{
		free(ptr[len]);
		ptr[len] = NULL;
		len--;
	}
	free(ptr);
	ptr = NULL;
	return (NULL);
}
