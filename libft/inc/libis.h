/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libis.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:52:30 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 17:54:36 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBIS_H
# define LIBIS_H

# include "commons.h"

/**
 * =============================================================================
 * 
 * @name FT_IS functions
 * @brief Functions to check if a character is of a certain type.
 * @dir ft_is/
 * 
 * @details
 * This directory contains functions to check if a character is of a certain
 * type. The functions are implemented in the following files:
 * - ft_isalnum.c
 * - ft_isalpha.c
 * - ft_isascii.c
 * - ft_ischrinstr.c
 * - ft_isdigit.c
 * - ft_islower.c
 * - ft_isprint.c
 * - ft_issign.c
 * - ft_isspace.c
 * - ft_isupper.c
 */

t_bool	ft_isupper(int c);
t_bool	ft_islower(int c);
t_bool	ft_isalpha(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isalnum(int c);
t_bool	ft_isprint(int c);
t_bool	ft_isspace(int c);
t_bool	ft_issign(int c);
t_bool	ft_isascii(int c);
t_bool	ft_ischrinstr(char *str);
// -----------------------------------------------------------------------------

#endif
