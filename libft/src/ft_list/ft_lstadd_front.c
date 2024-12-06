/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:13:46 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:36:19 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstadd_front
 * @brief Adds the element ’new’ at the beginning of the list.
 * 
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstadd_front.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstadd_back
 */
void
	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
