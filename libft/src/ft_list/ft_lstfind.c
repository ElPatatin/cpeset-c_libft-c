/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:14:39 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:39:39 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstfind
 * @brief Finds the first element in the list that contains the data_ref.
 * 
 * @param begin_list The beginning of the list.
 * @param data_ref The data to find.
 * @param cmp The address of the function used to compare the data.
 * @return t_list* The address of the first element that contains the data_ref.
 * 
 * @dir ft_list/
 * @file ft_lstfind.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstclear | ft_lstadd_back
 */
t_list
	*ft_lstfind(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list || !data_ref)
		return (NULL);
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			break ;
		begin_list = begin_list->next;
	}
	return (begin_list);
}
