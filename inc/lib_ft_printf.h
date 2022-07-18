#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H

# include <stdarg.h>
# include "lib_ft.h"

int	ft_printf(const char *fmt, ...);

int	ft_char(int c);
int	ft_string(char *str);
int	ft_nbrbase(int n, int base, char c);
int	ft_ptr(t_unll arg);

#endif
