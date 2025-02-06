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

#include <fcntl.h>		// open()
#include <unistd.h>		// close() && read()
#include <stdlib.h>		// malloc() && free()
#include "structs.h"

int	dict_size(void)
{
	char	byte;
	int		byte_count;
	int		file_desc;

	file_desc = open("numbers.dict", O_RDONLY);
	if (file_desc == -1)
		return (0);
	byte_count = 0;
	while (read(file_desc, &byte, 1))
		byte_count++;
	close(file_desc);
	return (byte_count);
}

char	*numbers_dict_content(void)
{
	int			file_desc;
	char		*file_content;
	ssize_t		file_size;
	ssize_t		bytes_read;

	file_size = dict_size();
	if (file_size <= 0)
		return (NULL);
	file_content = malloc(file_size + 1);
	if (!file_content)
		return (NULL);
	file_desc = open("numbers.dict", O_RDONLY);
	if (file_desc == -1)
		return (free(file_content), close(file_desc), NULL);
	bytes_read = read(file_desc, file_content, file_size);
	if (bytes_read < 0)
		return (free(file_content), close(file_desc), NULL);
	file_content[file_size] = '\0';
	return (close(file_desc), file_content);
}