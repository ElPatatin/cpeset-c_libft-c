/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libput.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:58:50 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:00:40 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPUT_H
# define LIBPUT_H

# include "commons.h"

/**
 * =============================================================================
 * 
 * @name FT_PUT functions
 * @brief Functions to print data.
 * @dir ft_put/
 * 
 * @details
 * This directory contains functions to print data. The functions are implemented
 * in the following files:
 * - ft_putchar.c
 * - ft_putchar_fd.c
 * - ft_putstr.c
 * - ft_putstr_fd.c
 * - ft_putnbr.c
 * - ft_putnbr_fd.c
 * - ft_putnbr_base_fd.c
 */

int		ft_putchar(int c);
int		ft_putchar_fd(int c, int fd);
int		ft_putstr(char	*str);
int		ft_putstr_fd(char	*str, int fd);
int		ft_putnbr(t_ll nbr);
int		ft_putnbr_fd(t_ll nbr, int fd);
int		ft_putnbr_base_fd(t_ll nbr, int base, int fd);
// -----------------------------------------------------------------------------

#endif