/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:13:59 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 22:37:08 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/**
 * @name ft_lstat
 * @brief Returns the address of the nth element of a list.
 * 
 * @param begin_list The beginning of the list.
 * @param nbr The index of the element to return.
 * @return t_list* The address of the nth element.
 * 
 * @dir ft_list/
 * @file ft_lstat.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_lstadd_back | ft_lstadd_front
 */
t_list
	*ft_lstat(t_list *begin_list, t_unt nbr)
{
	t_list	*current;
	ssize_t	idx;

	current = begin_list;
	idx = -1;
	while (++idx < nbr)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	return (current);
}
