/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-31 09:46:21 by wheino            #+#    #+#             */
/*   Updated: 2025-01-31 09:46:21 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int main(int argc, char *argv[])
{
	// Test case 1: Normal case with multiple strings
	char *strings1[] = {"Hello", "World", "this", "is", "C"};
	char *sep1 = "---";
	char *result1 = ft_strjoin(5, strings1, sep1);
	printf("Test 1: %s\n", result1);  // Expected: "Hello World this is C"
	free(result1);

	// Test case 2: Size is 0 (edge case)
	char *strings2[] = {};
	char *sep2 = " ";
	char *result2 = ft_strjoin(0, strings2, sep2);
	printf("Test 2: '%s'\n", result2);  // Expected: ""
	free(result2);

	// Test case 3: Only one string
	char *strings3[] = {"SingleString"};
	char *sep3 = ",";
	char *result3 = ft_strjoin(1, strings3, sep3);
	printf("Test 3: %s\n", result3);  // Expected: "SingleString"
	free(result3);
	return 0;
}
