/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:15:41 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:15:26 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"
#include "libmem.h"

/**
 * @name ft_lstnew
 * @brief Allocates ft_calloc and returns a new element. The variable
 * ’data’ is initialized with the value of the parameter ’data’. The
 * variable ’next’ is initialized to NULL.
 * 
 * @param data The data to create the new element with.
 * @return t_list* The new element.
 * 
 * @dir ft_list/
 * @file ft_lstnew.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstadd_back | ft_lstadd_front
 */
t_list
	*ft_lstnew(void *data)
{
	t_list	*lst;

	lst = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->data = data;
	lst->next = NULL;
	return (lst);
}
