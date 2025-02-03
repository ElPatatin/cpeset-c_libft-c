/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:20:04 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:24:46 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libmem.h"

static t_bool
	ft_print_address(uintptr_t address);
static t_bool
	ft_print_hex(const unsigned char *mem, size_t i, size_t size);
static t_bool
	write_hex_digit(unsigned char value);
static t_bool
	ft_print_content(const unsigned char *mem, size_t i, size_t size);

t_bool
	ft_printmem(const void *memory, size_t size)
{
	const unsigned char	*mem;
	uintptr_t			address;
	size_t				i;

	if (size == 0)
		return (FALSE);
	mem = (const unsigned char *)memory;
    i = 0;
    while (i < size)
	{
		address = (uintptr_t)&mem[i];
		if (ft_print_address(address) == TRUE)
			return (TRUE);
		if (write(STDOUT_FILENO, ":", 1) == -1)
			return (TRUE);
		if (ft_print_hex(mem, i, size) == TRUE)
			return (TRUE);
		if (write(STDOUT_FILENO, " | ", 3) == -1)
			return (TRUE);
		if (ft_print_content(mem, i, size) == TRUE)
			return (TRUE);
		if (write(STDOUT_FILENO, "\n", 1) == -1)
			return (TRUE);
		i += 16;
    }
	return (FALSE);
}

static t_bool
	ft_print_address(uintptr_t address)
{
	char buffer[MEM_SIZE];
	int addressLength;
	int k;
	int l;

	addressLength = 0;
	while (address > 0)
	{
		if (address % HEX_BASE < 10)
			buffer[addressLength++] = '0' + address % HEX_BASE;
		else
			buffer[addressLength++] = 'a' + address % HEX_BASE - 10;
		address /= HEX_BASE;
	}
	while (addressLength < HEX_BASE)
		buffer[addressLength++] = '0';
	k = 0;
	l = addressLength - 1;
	while (k < l)
		ft_swap(&buffer[k++], &buffer[l--]);
	if (write(STDOUT_FILENO, buffer, addressLength) == -1)
		return (TRUE);
	return (FALSE);
}

static t_bool
	ft_print_hex(const unsigned char *mem, size_t i, size_t size)
{
	size_t			j;

	j = -1;
	while (++j < HEX_BASE)
	{
		if (j % 1 == 0)
			if (write(STDOUT_FILENO, " ", 1) == -1)
				return (TRUE);
		if (i + j < size)
		{
			if (write_hex_digit(mem[i + j] / HEX_BASE) == TRUE)
				return (TRUE);
			if (write_hex_digit(mem[i + j] % HEX_BASE) == TRUE)
				return (TRUE);
		}
		else
			if (write(STDOUT_FILENO, "  ", 2) == -1)
				return (TRUE);
	}
	return (FALSE);
}

static t_bool
	write_hex_digit(unsigned char value)
{
	char hexDigit;

	if (value < 10)
		hexDigit = '0' + value;
	else
		hexDigit = 'a' + value - 10;
	if (write(STDOUT_FILENO, &hexDigit, 1) == -1)
		return (TRUE);
	return (FALSE);
}

static t_bool
	ft_print_content(const unsigned char *mem, size_t i, size_t size)
{
	size_t	j;

	j = -1;
	while (++j < 16 && i + j < size)
	{
		if (mem[i + j] >= 32 && mem[i + j] <= 126)
		{
			if (write(STDOUT_FILENO, &mem[i + j], 1) == -1)
				return (TRUE);
		}
		else
		{
			if (write(STDOUT_FILENO, ".", 1) == -1)
				return (TRUE);
		}
	}
	return (FALSE);
}

