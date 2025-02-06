/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 17:16:34 by wheino            #+#    #+#             */
/*   Updated: 2025-02-04 17:16:34 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src);
char	*ft_strcpy(char *src, char *dest);
int		ft_strlen(char *str);

typedef	struct s_stock_str {
	int size;
	char *str;
	char *copy;
}	t_stock_str;

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

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

	char *str[] = {"adlakjfshdfkaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhaadlakjfshdfkajsdhfkalsjdfhkashfdkasldfhkalsjhajsdhfkalsjdfhkashfdkasldfhkalsjhav", "WorldWorld"};
	my_structure = ft_strs_to_tab(2, str);
	ft_show_tab(my_structure);
	return (0);
}


