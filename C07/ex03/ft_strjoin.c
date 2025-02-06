/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-03 10:36:30 by wheino            #+#    #+#             */
/*   Updated: 2025-02-03 10:36:30 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char **strs, char *sep, int size);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		res_size;
	int		i;

	if (size == 0)
	{
		res = (char *)malloc(1);
		res[0] = '\0';
		return (res);
	}
	res_size = get_size(strs, sep, size);
	res = (char *)malloc(((res_size + 1) * sizeof(char)));
	if (res == NULL)
		return (NULL);
	i = 0;
	res[i] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

int	get_size(char **strs, char *sep, int size)
{
	int	i;
	int	bytes;

	bytes = 0;
	i = 0;
	while (i < size)
	{
		bytes += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		bytes += ft_strlen(sep) * (i - 1);
	return (bytes);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
