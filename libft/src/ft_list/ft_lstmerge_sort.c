/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:15:32 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:46:32 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstmerge_sort
 * @brief Merge two sorted linked lists.
 * 
 * @param begin_list1 The address of a pointer to the first link of a list.
 * @param begin_list2 The address of a pointer to the first link of a list.
 * @param cmp The address of the function used to compare the data.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstmerge_sort.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstmerge | ft_lstsort
 */
void	ft_lstmerge_sort(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)())
{
	t_list	*temp;

	if (!begin_list1 || !begin_list2)
		return ;
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	if (cmp((*begin_list1)->data, begin_list2->data) > 0)
	{
		temp = begin_list2->next;
		begin_list2->next = *begin_list1;
		*begin_list1 = begin_list2;
		ft_lstmerge_sort(begin_list1, temp, cmp);
	}
	else
		ft_lstmerge_sort(&(*begin_list1)->next, begin_list2, cmp);
}


