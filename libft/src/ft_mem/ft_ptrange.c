/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:14:20 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:43:13 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_ptrange
 * @brief Create an array of integers.
 * 
 * @param range The pointer to the array of integers.
 * @param min The minimum value.
 * @param max The maximum value.
 * @return int Return the number of integers in the array.
 * 
 * @dir ft_mem/
 * @file ft_ptrange.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_rrange | ft_range
 */
int
	ft_ptrange(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max || !range)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (-1);
	while (i < (max - min))
	{
		tab[i] = min++;
		++i;
	}
	*range = tab;
	return (i);
}
