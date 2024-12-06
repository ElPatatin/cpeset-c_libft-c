/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:14:09 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:37:44 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstclear
 * @brief Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3).
 * 
 * @param lst The address of a pointer to an element.
 * @param del The address of the function used to delete the content of the element.
 * @return void
 * 
 * @dir ft_list/
 * @file ft_lstclear.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstadd_back | ft_lstadd_front
 */
void
	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
