/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 14:19:19 by wheino            #+#    #+#             */
/*   Updated: 2025-02-04 14:19:19 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);
char	*ft_strcpy(char *src, char *dest);
int		ft_strlen(char *str);

typedef	struct s_stock_str {
	int size;
	char *str;
	char *copy;
}	t_stock_str;


struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *arr;
	int i;
	
	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(src, dest);
	return (dest);
}

int	main(void)
{
	t_stock_str *my_structure;

	char *str[] = {"Hello", "WorldWorld"};
	my_structure = ft_strs_to_tab(2, str);
	printf("String1 size: %d\nString1 str: %s\nString1 cpy: %s\n\n", my_structure[0].size, my_structure[0].str, my_structure[0].copy);
	printf("String2 size: %d\nString2 str: %s\nString2 cpy: %s\n\n", my_structure[1].size, my_structure[1].str, my_structure[1].copy);
	printf("Last element size: %d\nLast element str: %s\nLast element cpy: %s\n", my_structure[2].size, my_structure[2].str, my_structure[2].copy);
	return (0);
}