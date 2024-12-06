/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:56:57 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 17:58:27 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMEM_H
# define LIBMEM_H

# include "commons.h"

/**
 * =============================================================================
 * 
 * @name FT_MEM functions
 * @brief Functions to manipulate memory.
 * @dir ft_mem/
 * 
 * @details
 * This directory contains functions to manipulate memory. The functions are
 * implemented in the following files:
 * - ft_bzero.c
 * - ft_calloc.c
 * - ft_delete.c
 * - ft_memchr.c
 * - ft_memcmp.c
 * - ft_memcpy.c
 * - ft_memfree.c
 * - ft_memmove.c
 * - ft_memset.c
 * - ft_range.c
 * - ft_rrange.c
 * - ft_strdup.c
 * - ft_ultrange.c
 */

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_delete(void *dlt);
void	*ft_memchr(const void *s, int c, size_t n);
void	**ft_memfree(char **ptr, int len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dsy, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strdup(const char *s1);
int		*ft_range(int min, int max);
int		*ft_rrange(int start, int end);
int		ft_ultrange(int **range, int min, int max);
// -----------------------------------------------------------------------------

#endif