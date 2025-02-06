/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-02 10:25:16 by wheino            #+#    #+#             */
/*   Updated: 2025-02-02 10:25:16 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	dict_size(void)
{
	char	byte;
	int		byte_count;
	int		fd;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	byte_count = 0;
	while (read(fd, &byte, 1))
		byte_count++;
	close(fd);
	return (byte_count);
}

char	*numbers_dict_content(void)
{
	int			fd;
	char		*file_content;
	ssize_t		file_size;
	ssize_t		bytes_read;

	file_size = dict_size();
	if (file_size <= 0)
		return (NULL);
	file_content = malloc(file_size + 1);
	if (!file_content)
		return (NULL);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (free(file_content), close(fd), NULL);
	bytes_read = read(fd, file_content, file_size);
	if (bytes_read < 0)
		return (free(file_content), close(fd), NULL);
	file_content[file_size] = '\0';
	return (close(fd), file_content);
}
