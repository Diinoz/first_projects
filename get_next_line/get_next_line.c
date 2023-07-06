/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:55:27 by nicordie          #+#    #+#             */
/*   Updated: 2023/06/16 15:40:03 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*new_next_line(char	*next_line)
{
	int		i;
	int		j;
	char	*new_line;

	i = 0;
	j = 0;
	while (next_line[i] && next_line[i] != '\n')
		i++;
	if (next_line[i] == '\n')
		i++;
	if (next_line[i] == 0)
		return (0);
	new_line = malloc(sizeof(char) * (ft_strlen(next_line) - i + 1));
	if (!new_line)
		return (0);
	while (next_line[i])
		new_line[j++] = next_line[i++];
	new_line[j] = 0;
	free(next_line);
	return (new_line);
}

char	*create_line(char *next_line)
{
	char	*get_next_line;
	int		i;

	i = 0;
	while (next_line[i] && next_line[i] != '\n')
		i++;
	if (next_line[i] != '\n')
		i--;
	get_next_line = malloc(sizeof(char) * (i + 2));
	if (!get_next_line)
		return (0);
	get_next_line[i + 1] = 0;
	while (i >= 0)
	{
		get_next_line[i] = next_line[i];
		i--;
	}
	if (get_next_line[0] == 0)
	{
		free (get_next_line);
		get_next_line = 0;
	}
	return (get_next_line);
}

char	*ft_read(int fd, char *next_line)
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	nbytes;
	int		i;
	int		j;

	j = 0;
	nbytes = 1;
	while (nbytes > 0)
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		buffer[nbytes] = 0;
		next_line = ft_strjoin(next_line, buffer);
		if (!next_line)
			return (0);
		i = 0;
		while (i < nbytes)
		{
			if (next_line[i + j] == '\n')
				return (next_line);
			i++;
		}
		j += i;
	}
	return (next_line);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*get_next_line;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (0);
	next_line = ft_read(fd, next_line);
	if (!next_line)
		return (0);
	get_next_line = create_line(next_line);
	if (!get_next_line)
		return (0);
	next_line = new_next_line(next_line);
	if (!next_line)
		return (0);
	return (get_next_line);
}
/*
#include <fcntl.h>
#include <stdio.h>
int main()
{
    int 	fd;
	char	*test;

	test = 0;
	fd = open("file.txt", O_RDONLY);
//	printf("%s", get_next_line(fd));
	printf("%s%s%s%s%s%s", get_next_line(fd), get_next_line(fd), get_next_line(fd), get_next_line(fd), get_next_line(fd), get_next_line(fd));
}*/
