/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:35:34 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:08:06 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "libgnl.h"

static char	*ft_read_save(int fd, char *buffer);
static char	*ft_get_line(char *buffer);
static char	*ft_save(char *buffer);

char
	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*line;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer[fd])
	{
		buffer[fd] = ft_strdup("");
		if (!buffer[fd])
			return (NULL);
	}
	buffer[fd] = ft_read_save(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = ft_get_line(buffer[fd]);
	buffer[fd] = ft_save(buffer[fd]);
	return (line);
}

static char
	*ft_read_save(int fd, char *buffer)
{
	char	*buff;
	int		reading;

	buff = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buff)
		return (NULL);
	reading = TRUE;
	while (!ft_strchr(buffer, '\n') && reading != FALSE)
	{
		reading = read(fd, buff, BUFFER_SIZE);
		if (reading == ERRNUM)
		{
			ft_delete(buff);
			return (ft_delete(buffer));
		}
		buffer = ft_strjoin(buffer, buff);
	}
	ft_delete(buff);
	return (buffer);
}

static char
	*ft_get_line(char *buffer)
{
	int		i;
	char	*str;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	str = ft_calloc((i + 2), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i++] != '\n')
		str[i] = buffer[i];
	if (buffer[i++] == '\n')
		str[i] = buffer[i];
	return (str);
}

static char
	*ft_save(char *buffer)
{
	int		i;
	int		c;
	char	*str;

	i = 0;
	if (!buffer)
		return (ft_delete(buffer));
	while (buffer[i] && (buffer[i] != '\n'))
		i++;
	if (buffer[i] == '\0')
		return (ft_delete(buffer));
	str = ft_calloc(ft_strlen(buffer) - i + 1, 1);
	i++;
	c = 0;
	while (buffer[i])
		str[c++] = buffer[i++];
	ft_delete(buffer);
	return (str);
}
