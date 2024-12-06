/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort_insert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:17:07 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:10:15 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstsort_insert
 * @brief Inserts an element in a sorted linked list.
 * 
 * @param begin_list The address of a pointer to the first link of a list.
 * @param data The data to insert.
 * @param cmp The address of the function used to compare the data.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstsort_insert.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstsort
 */
void
	ft_lstsort_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*current;
	t_list	*elem;

	current = *begin_list;
	elem = ft_lstnew(data);
	if (!elem)
		return ;
	if (!current)
	{
		*begin_list = elem;
		return ;
	}
	if ((*cmp)(elem->data, current->data) < 0)
	{
		elem->next = current;
		*begin_list = elem;
		return ;
	}
	while (current->next && (*cmp)(elem->data, current->next->data) > 0)
		current = current->next;
	elem->next = current->next;
	current->next = elem;
}
