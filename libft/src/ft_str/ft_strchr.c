/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:48:55 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/07 13:36:17 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

/**
 * @name ft_strchr
 * @brief Locate the first occurrence of a character in a string.
 * 
 * @param s The string to search.
 * @param c The character to search.
 * @return char* A pointer to the located character, or NULL if the character
 * does not appear in the string.
 * 
 * @dir ft_str/
 * @file ft_strchr.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_strrchr
 */
char
	*ft_strchr(char const *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
