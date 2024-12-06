/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforeach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:14:47 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:40:56 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstforeach
 * @brief Iterates the list ’begin_list’ and applies the function ’f’ to the data of each element.
 * 
 * @param begin_list The beginning of the list.
 * @param f The address of the function used to iterate the list.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstforeach.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstclear | ft_lstadd_back
 */
void
	ft_lstforeach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list)
		return ;
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
