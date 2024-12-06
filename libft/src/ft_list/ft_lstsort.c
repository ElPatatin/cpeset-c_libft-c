/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:17:01 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:13:07 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstsort
 * @brief Sorts a linked list.
 * 
 * @param begin_list The address of a pointer to the first link of a list.
 * @param cmp The address of the function used to compare the data.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstsort.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstsort_insert
 */
void
	ft_lstsort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*next;

	if (!begin_list || !*begin_list || !(*begin_list)->next)
		return ;
	current = *begin_list;
	while (current->next)
	{
		next = current->next;
		if ((*cmp)(current->data, next->data) > 0)
		{
			ft_lstswap(current, next);
			current = *begin_list;
		}
		else
			current = current->next;
	}
}
