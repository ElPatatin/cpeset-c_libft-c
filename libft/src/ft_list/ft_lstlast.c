/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:15:01 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:41:12 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstlast
 * @brief Returns the last element of the list.
 * 
 * @param begin_list The beginning of the list.
 * @return t_list* The address of the last element.
 * 
 * @dir ft_list/
 * @file ft_lstlast.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstclear | ft_lstadd_back
 */
t_list
	*ft_lstlast(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}
