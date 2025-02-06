/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-02 12:40:54 by wheino            #+#    #+#             */
/*   Updated: 2025-02-02 12:40:54 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>		// open()
#include <unistd.h>		// close() && read()
#include <stdlib.h>		// malloc() && free()
#include "structs.h"

int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	skip_spaces(char *file_content, int *i)
{
	while (file_content[*i] == ' ')
		(*i)++;
}

char	*extract_key(char *file_content, int *i, int *key_len)
{
	char *key;
	char *key_start;

	key_start = &file_content[*i];
	while (file_content[*i] != ':')
		(*i)++;
	key_len = *i - (key_start - file_content);	
	key = malloc(key_len + 1);
	if (!key)
		return (NULL);
	ft_strncpy(key, key_start, key_len);
	return (key);
}

char 	*extract_value(char *file_content, int *i, int *value_len)
{
	char	*value_start;
	char	*value;

	value_start = &file_content[*i];
	while (file_content[*i] != '\n' && file_content[*i] != '\0')
		(*i)++;
	value_len = *i - (value_start - file_content);	
	value = malloc(value_len + 1);
	if (!value)
		return (NULL);
	ft_strncpy(value, value_start, value_len);
	return (value);	
}

t_keys_values	*parse_dict(char *file_content, int *pair_count)
{
	int				i;
	int				key_len;
	int				value_len;
	char			*value_start;
	char			*key;
	char			*value;
	t_keys_values	*pairs;

	pairs = malloc(sizeof(t_keys_values) * 50);
	if (!pairs)
		return (NULL);
	*pair_count = 0;
	i = 0;
	while (file_content[i] != '\0')
	{	
		skip_spaces(file_content, &i);
		key = extract_key(file_content, &i, &key_len);
		pairs[*pair_count].key = key;
		while (file_content[i] == ' ' && file_content[i] != '\0')
			i++;
		value = extract_value(file_content, &i, &value_len);
		pairs[*pair_count].value = value;
		if (file_content[i] == '\n')
			i++;
		(*pair_count)++;
	}
	return (pairs);
}
