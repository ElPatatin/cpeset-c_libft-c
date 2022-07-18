/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:13:59 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/18 17:14:02 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/lib_list.h"

t_list	*ft_lstat(t_list *begin_list, t_unt nbr)
{
	while (nbr-- > 0 && begin_list)
		begin_list = begin_list->next;
	return (begin_list);
}
