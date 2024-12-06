/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:51:28 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 23:09:27 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIST_H
# define LIBLIST_H

# include "commons.h"

/**
 * =============================================================================
 * 
 * @name FT_LIST functions
 * @brief Functions to manipulate linked lists.
 * @dir ft_list/
 * 
 * @details
 * This directory contains functions to manipulate linked lists. The functions
 * are based on the 42 piscine and the libft project. The functions are
 * implemented in the following files:
 * - ft_lstadd_back.c
 * - ft_lstadd_front.c
 * - ft_lstat.c
 * - ft_lstclear.c
 * - ft_lstdelone.c
 * - ft_lstfind.c
 * - ft_lstforeach_if.c
 * - ft_lstforeach.c
 * - ft_lstlast.c
 * - ft_lstmap.c
 * - ft_lstmerge_sort.c
 * - ft_lstmerge.c
 * - ft_lstnew.c
 * - ft_lstremove_if.c
 * - ft_lstreverse.c
 * - ft_lstsize.c
 * - ft_lstsort_insert.c
 * - ft_lstsort.c
 * - ft_lstswap.c
 * 
 * @details
 * The data structure used in the linked list contains the following fields:
 * - void *data: The data to store in the linked list.
 * - struct s_list *next: The pointer to the next element in the linked list.
 */

typedef struct s_list
{
	void				*data;
	struct s_list		*next;
}						t_list;

t_list	*ft_lstnew(void *data);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *begin_list);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstremove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
			void (*free_fct)(void *));
t_list	*ft_lstat(t_list *begin_list, t_unt nbr);
void	ft_lstreverse(t_list **begin_list);
void	ft_lstforeach(t_list *begin_list, void (*f)(void *));
void	ft_lstforeach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)());
t_list	*ft_lstfind(t_list *begin_list, void *data_ref, int (*cmp)());
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstswap(t_list *a, t_list *b);
void	ft_lstsort(t_list **begin_list, int (*cmp)());
void	ft_lstsort_insert(t_list **begin_list, void *data, int (*cmp)());
void	ft_lstmerge(t_list **begin_list1, t_list *begin_list2);
void	ft_lstmerge_sort(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)());
// -----------------------------------------------------------------------------

#endif