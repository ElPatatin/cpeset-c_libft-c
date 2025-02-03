/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:41:22 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:40:37 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_rrange
 * @brief Create an array of integers in reverse order.
 * 
 * @param start The start value.
 * @param end The end value.
 * @return int* Return a pointer to the array of integers.
 * 
 * @dir ft_mem/
 * @file ft_rrange.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_range
 */
int
	*ft_rrange(int start, int end)
{
	int	nbrcount;
	int	*ptr;
	int	i;
	int	flag;

	i = 0;
	nbrcount = 1 + ft_absval(end - start);
	ptr = (int *)malloc(sizeof(int) * nbrcount);
	if (start > end)
		flag = 1;
	else
		flag = -1;
	while (nbrcount > i)
	{
		ptr[i++] = end;
		end += flag;
	}
	return (ptr);
}
