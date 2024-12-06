/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:17:11 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:08:36 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstswap
 * @brief Swaps the data of two elements in a linked list.
 * 
 * @param a The first element.
 * @param b The second element.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstswap.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_lstswap(t_list *a, t_list *b)
{
	void	*temp;

	if (!a || !b)
		return ;
	temp = a->data;
	a->data = b->data;
	b->data = temp;
}
