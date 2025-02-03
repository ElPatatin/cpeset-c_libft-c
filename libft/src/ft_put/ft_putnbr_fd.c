/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:54:19 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:46:48 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_putnbr_fd
 * @brief Outputs the number 'nbr' to the given file descriptor.
 * 
 * @param nbr The number to output.
 * @param fd The file descriptor on which to write.
 * @return int Return 0 on success, -1 on failure.
 * 
 * @dir ft_put/
 * @file ft_putnbr_fd.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_putnbr
 */
int
	ft_putnbr_fd(t_ll nbr, int fd)
{
	char	*str;

	str = "0123456789";
	if (nbr < 0)
	{
		if (write(fd, "-", sizeof(char)) < 0)
			return (-1);
		ft_absval(nbr);
	}
	if (nbr >= 10)
		if (ft_putnbr(nbr / 10) == -1)
			return (-1);
	if (write(fd, &str[nbr % 10], sizeof(char)) < 0)
		return (-1);
	return (0);
}
