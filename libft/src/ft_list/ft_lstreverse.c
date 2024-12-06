/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:16:36 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:06:39 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstreverse
 * @brief Reverses the order of the elements in a linked list.
 * 
 * @param begin_list The address of a pointer to the first link of a list.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstreverse.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstadd_back | ft_lstadd_front | ft_lstat | ft_lstclear | ft_lstdelone
 */
void
	ft_lstreverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	if (!begin_list)
		return ;
	prev = NULL;
	current = *begin_list;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
}
