/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:13:54 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:40:29 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strdup
 * @brief Duplicate a string.
 * 
 * @param s1 The string to duplicate.
 * @return char* Return a pointer to the duplicated string.
 * 
 * @dir ft_mem/
 * @file ft_strdup.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_strcpy | ft_strndup
 */
char
	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len;

	if (!s1)
	{
		dst = ft_calloc(1, sizeof(char));
		if (!dst)
			return (NULL);
		return (dst);
	}
	len = ft_strlen(s1);
	dst = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, len + 1);
	return (dst);
}
