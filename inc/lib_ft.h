/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:08:37 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/09 18:08:38 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_H
# define LIB_FT_H

# include "lib_inc.h"

typedef long double		t_ld;
typedef unsigned int	t_unt;

// FT_is functions. Return 1 if true, return 0 if false
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_islower(int c);

// FT_math functions. Multiple purpouse functions for operations.
t_ld	ft_pow(t_ld n, t_unt pow);
t_ld	ft_factorial(t_ld nb);
int		ft_sqrt(int nb);
int		ft_prime(int nb);
int		ft_find_next_prime(int nb);
t_ld	ft_absval(t_ld n);
int		ft_nbrlen(t_ld nbr);
int		ft_nbrlen_base(t_ld nbr, int base);
int		ft_atoi(const char *str);
int		ft_atoi(const char *str, int base);
char	*ft_itoa(int nbr);
char	*ft_itoa_base(int nbr, int base);

void	ft_swap(int *a, int *b);
void	ft_sort_int_tab(int *tab, unsigned int size);
void	ft_rev_int_tab(int *tab, int size);



// To put
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dsy, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
