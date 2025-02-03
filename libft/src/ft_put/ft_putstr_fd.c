/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:54:44 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:47:18 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_putstr_fd
 * @brief Outputs the string 'str' to the given file descriptor.
 * 
 * @param str The string to output.
 * @param fd The file descriptor on which to write.
 * @return int Return the number of characters written, -1 on failure.
 * 
 * @dir ft_put/
 * @file ft_putstr_fd.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_putstr
 */
int
	ft_putstr_fd(char	*str, int fd)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (0);
	if (write(fd, str, ft_strlen(str)) < 0)
		return (-1);
	return (ft_strlen(str));
}
