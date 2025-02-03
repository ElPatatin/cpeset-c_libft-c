/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:54:30 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:47:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_putstr
 * @brief Outputs the string 'str' to the standard output.
 * 
 * @param str The string to output.
 * @return int Return the number of characters written, -1 on failure.
 * 
 * @dir ft_put/
 * @file ft_putstr.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_putstr_fd
 */
int
	ft_putstr(char	*str)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (0);
	if (write(STDOUT_FILENO, str, ft_strlen(str)) < 0)
		return (-1);
	return (ft_strlen(str));
}
