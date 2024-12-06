/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:01:01 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:08:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSORT_H
# define LIBSORT_H

# include "commons.h"

/**
 * =============================================================================
 * 
 * @name FT_SORT functions
 * @brief Functions to sort data.
 * @dir ft_sort/
 * 
 * @details
 * This directory contains functions to sort data. The functions are implemented
 * in the following files:
 * - ft_adv_sort_str_tab.c
 * - ft_any.c
 * - ft_bubble_sort.c
 * - ft_count_if.c
 * - ft_foreach.c
 * - ft_is_sort.c
 * - ft_insertion_sort.c
 * - ft_map.c
 * - ft_quick_sort.c
 * - ft_rev_int_tab.c
 * - ft_selection_sort.c
 * - ft_sort_int_tab.c
 * - ft_sort_str_tab.c
 * - ft_striteri.c
 * - ft_strmapi.c
 * - ft_swap.c
 */

// void	ft_bubble_sort(int *tab, int size);
// void	ft_insertion_sort(int *tab, int size);
// void	ft_quick_sort(int *tab, int size);
// void	ft_selection_sort(int *tab, int size);

void	ft_swap(int *a, int *b);
void	ft_sort_int_tab(int *tab, unsigned int size);
void	ft_rev_int_tab(int *tab, int size);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int lenght, int (*f)(int));
int		ft_any(char **tab, int (*f)(char *));
int		ft_count_if(char **tab, int lenght, int (*f)(char *));
void	ft_sort_str_tab(char **tab);
void	ft_adv_sort_str_tab(char **tab, int (*cmp)(char *, char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// -----------------------------------------------------------------------------

#endif
