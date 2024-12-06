/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:15:17 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:47:18 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstmerge
 * @brief Merge two linked lists.
 * 
 * @param begin_list1 The address of a pointer to the first link of a list.
 * @param begin_list2 The address of a pointer to the first link of a list.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstmerge.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstmerge_sort
 */
void
	ft_lstmerge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;
	if (!current)
		*begin_list1 = begin_list2;
	while (current->next)
		current = current->next;
	current->next = begin_list2;
}
