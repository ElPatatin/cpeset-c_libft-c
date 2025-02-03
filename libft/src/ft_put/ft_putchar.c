/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:53:44 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:46:37 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_putchar
 * @brief Outputs the character 'c' to the standard output.
 * 
 * @param c The character to output.
 * @return int Return 1 on success, -1 on failure.
 * 
 * @dir ft_put/
 * @file ft_putchar.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_putchar_fd
 */
int
	ft_putchar(int c)
{
	if (write(STDOUT_FILENO, &c, sizeof(char)) < 0)
		return (-1);
	return (1);
}
