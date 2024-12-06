/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:14:33 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:14:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstdelone
 * @brief Deletes and frees the given element, using the function ’del’ and free(3).
 * 
 * @param lst The element to free.
 * @param del The address of the function used to delete the content of the element.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstdelone.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstclear | ft_lstadd_back
 */
void
	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->data);
	free(lst);
}
