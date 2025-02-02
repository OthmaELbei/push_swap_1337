/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:16:57 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 10:55:52 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*test_nuwline(char *buffer, int fd)
{
	char		*line;
	ssize_t		size;
	char		*temp;

	line = (char *)malloc(((size_t)BUFFER_SIZE + 1) * (sizeof(char)));
	if (!line)
		return (NULL);
	size = 1;
	while (!ft_strchr(buffer, '\n') && size != 0)
	{
		size = read(fd, line, BUFFER_SIZE);
		if (size < 0)
			return (free (line), free(buffer), NULL);
		line[size] = '\0';
		temp = buffer;
		buffer = ft_strjoin(buffer, line);
		if (!buffer)
			return (free(temp), free(line), NULL);
		free(temp);
		temp = NULL;
	}
	return (free(line), line = NULL, buffer);
}

char	*tst_finel_line(char *buffer, int i)
{
	char	*line;
	int		j;

	j = 0;
	if (buffer[i] == '\n')
	{
		line = (char *)malloc((i + 2) * sizeof(char));
		if (!line)
			return (NULL);
		while (buffer[j] != '\n')
		{
			line[j] = buffer[j];
			j++;
		}
		line[j] = '\n';
		line[j + 1] = '\0';
	}
	else
	{
		line = (char *)malloc((i + 1) * sizeof(char));
		if (!line)
			return (NULL);
		line = ft_strcpy(line, buffer);
	}
	return (line);
}

char	*test_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer || *buffer == '\0')
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = tst_finel_line(buffer, i);
	if (!line)
		return (NULL);
	return (line);
}

char	*remove_line(char *buffer)
{
	char	*temp;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!buffer || *buffer == '\0')
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (free(buffer), buffer = NULL, NULL);
	while (buffer[j])
		j++;
	if (buffer[i] == '\n')
		i++;
	temp = (char *)malloc((j - i + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	ft_strcpy(temp, &buffer[i]);
	free(buffer);
	buffer = NULL;
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || fd >= OPEN_MAX
		|| BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	buffer = test_nuwline(buffer, fd);
	if (!buffer)
		return (free(buffer), buffer = NULL, NULL);
	line = test_line(buffer);
	if (!line)
		return (free(buffer), buffer = NULL, NULL);
	buffer = remove_line(buffer);
	free(buffer);
	buffer = NULL;
	return (line);
}
