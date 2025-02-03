/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:54:14 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:46:42 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_putnbr_base_fd
 * @brief Outputs the number 'nbr' in the given base to the given file descriptor.
 * 
 * @param nbr The number to output.
 * @param base The base in which to output the number.
 * @param fd The file descriptor on which to write.
 * @return int Return 0 on success, -1 on failure.
 * 
 * @dir ft_put/
 * @file ft_putnbr_base_fd.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_putnbr_fd | ft_putnbr_base
 */
int
	ft_putnbr_base_fd(t_ll nbr, int base, int fd)
{
	char	*str;

	str = "0123456789abcdef";
	if (nbr < 0)
	{
		if (base <= 10)
		{
			if (write(fd, "-", sizeof(char)) < 0)
				return (-1);
			ft_absval(nbr);
		}
		else
			nbr = ft_stou(nbr);
	}
	if (nbr >= base)
		if (ft_putnbr_base_fd(nbr / base, base, fd) == -1)
			return (-1);
	if (write(fd, &str[nbr % base], sizeof(char)) < 0)
		return (-1);
	return (0);
}
