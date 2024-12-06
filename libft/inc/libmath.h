/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:55:28 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 17:56:13 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATH_H
# define LIBMATH_H

# include "commons.h"

/**
 * =============================================================================
 * 
 * @name FT_MATH functions
 * @brief Functions to perform mathematical operations.
 * @dir ft_math/
 * 
 * @details
 * This directory contains functions to perform mathematical operations. The
 * functions are implemented in the following files:
 * - ft_absval.c
 * - ft_atoi_base.c
 * - ft_atoi.c
 * - ft_atoll_base.c
 * - ft_atoull_base.c
 * - ft_factorial.c
 * - ft_find_next_prime.c
 * - ft_itoa.c
 * - ft_itoa_base.c
 * - ft_lcm.c
 * - ft_lltoa_base.c
 * - ft_nbrlen_base.c
 * - ft_nbrlen.c
 * - ft_power.c
 * - ft_prime.c
 * - ft_sqrt.c
 * - ft_stou.c
 * - ft_ulltoa_base.c
 * - ft_unbrlen_base.c
 */

t_ll	ft_pow(t_ll n, t_unt pow);
t_ll	ft_factorial(t_ll nb);
int		ft_sqrt(int nb);
int		ft_prime(int nb);
t_unt	ft_lcm(t_unt a, t_unt b);
int		ft_find_next_prime(int nb);
t_ll	ft_absval(t_ll n);
int		ft_nbrlen(t_ll nbr);
int		ft_nbrlen_base(t_ll nbr, int base);
t_unt	ft_unbrlen_base(t_ull nbr, int base);
int		ft_atoi(const char *str);
int		ft_atoi_base(const char *str, char *str_base);
t_ll	ft_atoll_base(const char *str, char *str_base);
char	*ft_itoa(int nbr);
char	*ft_itoa_base(int nbr, char *str_base);
char	*ft_lltoa_base(t_ll nbr, char *str_base);
char	*ft_ulltoa_base(t_ull nbr, char *str_base);
t_ll	ft_stou(t_ll nbr);
// -----------------------------------------------------------------------------

#endif