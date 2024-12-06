/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:16:28 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:15:38 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"
#include "libmem.h"

/**
 * @name ft_lstremove_if
 * @brief Removes all elements from the list that are equal to the reference data.
 * 
 * @param begin_list The address of a pointer to the first link of a list.
 * @param data_ref The reference data to compare.
 * @param cmp The address of the function used to compare the data.
 * @param free_fct The address of the function used to free the data.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstremove_if.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstadd_back | ft_lstadd_front | ft_lstclear
 */
void
	ft_lstremove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
			void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*tmp;
	t_list	*pre;

	pre = NULL;
	current = *begin_list;
	while (current)
	{
		while (current && (*cmp)(current->data, data_ref) == 0)
		{
			if (pre)
				pre->next = current->next;
			else
				*begin_list = current->next;
			(*free_fct)(current->data);
			tmp = current;
			current = current->next;
			ft_delete(tmp);
		}
		if (current)
		{
			pre = current;
			current = current->next;
		}
	}
}
