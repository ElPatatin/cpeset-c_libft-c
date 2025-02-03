/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:54:03 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:47:10 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_putnbr
 * @brief Outputs the number 'nbr' to the standard output.
 * 
 * @param nbr The number to output.
 * @return int Return 0 on success, -1 on failure.
 * 
 * @dir ft_put/
 * @file ft_putnbr.c
 * @date 16-07-2022
 * @author cpeset-c
 * 
 * @see ft_putnbr_fd | ft_putnbr_base_fd
 */
int
	ft_putnbr(t_ll nbr)
{
	char	*str;

	str = "0123456789";
	if (nbr < 0)
	{
		if (write(STDOUT_FILENO, "-", sizeof(char)) < 0)
			return (-1);
		ft_absval(nbr);
	}
	if (nbr >= 10)
		if (ft_putnbr(nbr / 10) == -1)
			return (-1);
	if (write(STDOUT_FILENO, &str[nbr % 10], sizeof(char)) < 0)
		return (-1);
	return (0);
}
