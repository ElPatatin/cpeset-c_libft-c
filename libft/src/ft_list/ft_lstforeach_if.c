/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforeach_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:14:53 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:40:21 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstforeach_if
 * @brief Iterates the list ’begin_list’ and applies the function ’f’ to the data of the elements that contain the data_ref.
 * 
 * @param begin_list The beginning of the list.
 * @param f The address of the function used to iterate the list.
 * @param data_ref The data to find.
 * @param cmp The address of the function used to compare the data.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstforeach_if.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstclear | ft_lstadd_back
 */
void
	ft_lstforeach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)())
{
	if (!begin_list || !data_ref)
		return ;
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
