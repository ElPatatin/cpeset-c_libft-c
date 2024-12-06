/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:05:11 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:08:34 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTR_H
# define LIBSTR_H

# include "commons.h"

/**
 * =============================================================================
 * 
 * @name FT_STR functions
 * @brief Functions to manipulate strings.
 * @dir ft_str/
 * 
 * @details
 * This directory contains functions to manipulate strings. The functions are
 * implemented in the following files:
 * - ft_split.c
 * - ft_str_wcount.c
 * - ft_strcapitalize.c
 * - ft_strchr.c
 * - ft_strcmp.c
 * - ft_strcpy.c
 * - ft_strcspn.c
 * - ft_strjoin.c
 * - ft_strlcat.c
 * - ft_strlcpy.c
 * - ft_strlen.c
 * - ft_strlowcase.c
 * - ft_strncmp.c
 * - ft_strnstr.c
 * - ft_strrchr.c
 * - ft_strtrim.c
 * - ft_strupcase.c
 * - ft_substr.c
 * - ft_tolower.c
 * - ft_toupper.c
 */

char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_strchr(char const *s, int c);
int		ft_str_wcount(char const *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
size_t	ft_strlcpy(char *dst, const char *src, ssize_t dstsize);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strcspn(const char *s, const char *reject);
char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char	*str);
char	*ft_strupcase(char	*str);
int		ft_tolower(int c);
int		ft_toupper(int c);
// -----------------------------------------------------------------------------

#endif
