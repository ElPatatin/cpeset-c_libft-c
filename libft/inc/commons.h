/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commons.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:48:54 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 17:54:12 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMONS_H
# define COMMONS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/wait.h>

# ifndef OPEN_MAX
#  define OPEN_MAX		(int)_POSIX_OPEN_MAX
# endif

# define TRUE			(int)1
# define FALSE			(int)0
# define UNUSED			(void)
# define ERRNUM			(int)-1

typedef int					t_bool;
typedef unsigned int		t_unt;
typedef long long			t_ll;
typedef unsigned long		t_ul;
typedef unsigned long long	t_ull;

#endif