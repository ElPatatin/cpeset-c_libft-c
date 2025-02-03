/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:53:52 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:46:32 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_putchar_fd
 * @brief Outputs the character 'c' to the given file descriptor.
 * 
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 * @return int Return 1 on success, -1 on failure.
 * 
 * @dir ft_put/
 * @file ft_putchar_fd.c
 * @date 16-07-2022
 * @author cpeset-c
 */
int
	ft_putchar_fd(int c, int fd)
{
	if (write(fd, &c, sizeof(char)) < 0)
		return (-1);
	return (1);
}
