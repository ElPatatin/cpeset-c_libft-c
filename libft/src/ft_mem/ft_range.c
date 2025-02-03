/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:13:40 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:41:49 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_range
 * @brief Create an array of integers.
 * 
 * @param min The minimum value.
 * @param max The maximum value.
 * @return int* Return a pointer to the array of integers.
 * 
 * @dir ft_mem/
 * @file ft_range.c
 * @date 16-07-2022
 * @author cpeset-c
 */
int
	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (0);
	while (i < (max - min))
	{
		tab[i] = min++;
		++i;
	}
	return (tab);
}
