/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:51:50 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 17:52:18 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGNL_H
# define LIBGNL_H

# include "commons.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	(int)1000
# endif

/**
 * =============================================================================
 * 
 * @name FT_GNL functions
 * @brief Function to read a file line by line.
 * @dir ft_gnl/
 * 
 * @details
 * This directory contains fthe get_next_line function. This function reads a
 * file line by line. The function is implemented in the following files:
 * - get_next_line.c
 */

char	*get_next_line(int fd);
// -----------------------------------------------------------------------------

#endif