/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:15:08 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:44:57 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstmap
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element. Creates a new list resulting of the successive applications
 * of the function ’f’. The ’del’ function is used to delete the content of an
 * element if needed.
 * 
 * @param lst The address of a pointer to the first link of a list.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of an
 * element.
 * @return t_list* The new list. NULL if the allocation fails.
 * 
 * @dir ft_list/
 * @file ft_lstmap.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstnew | ft_lstadd_back | ft_lstclear
 */
t_list
	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_elem;
	t_list	*temp;

	if (!lst)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		temp = f(lst->data);
		n_elem = ft_lstnew(temp);
		if (!n_elem)
		{
			del(temp);
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_elem);
		lst = lst->next;
	}
	return (n_list);
}
