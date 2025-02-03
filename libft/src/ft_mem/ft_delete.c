/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:12:43 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:32:57 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_delete
 * @brief Free the memory and set the pointer to NULL.
 * 
 * @param dlt The pointer to the memory to free.
 * @return void* Return NULL.
 * 
 * @dir ft_mem/
 * @file ft_delete.c
 * @date 19-02-2023
 * @author cpeset-c
 */
void
	*ft_delete(void *dlt)
{
	free(dlt);
	dlt = NULL;
	return (NULL);
}
