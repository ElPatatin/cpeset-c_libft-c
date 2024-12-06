/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:16:50 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:07:51 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstsize
 * @brief Counts the number of elements in a list.
 * 
 * @param lst The beginning of the list.
 * @return t_unt The number of elements in the list.
 * 
 * @dir ft_list/
 * @file ft_lstsize.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstadd_back | ft_lstadd_front | ft_lstat | ft_lstclear | ft_lstdelone
 */
int
	ft_lstsize(t_list *lst)
{
	t_unt	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		++i;
	}
	return (i);
}
