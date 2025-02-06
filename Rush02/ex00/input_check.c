/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlundaev <vlundaev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:02:07 by vlundaev          #+#    #+#             */
/*   Updated: 2025/02/02 15:36:58 by vlundaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "my_header.h"

char	*validate_and_allocate(char *str, int *i, int *size)
{
	char	*nb;

	*i = skip_whitespace(str);
	*size = count_digits(str, *i);
	if (str[*i] == '-' || (!is_digit(str[*i]) && str[*i] != '+'))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (*size == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	nb = malloc(*size + 2);
	if (!nb)
		return (NULL);
	return (nb);
}

char	*ft_just_number(char *str)
{
	int		i;
	int		j;
	int		size;
	char	*nb;

	nb = validate_and_allocate(str, &i, &size);
	if (!nb)
		return (NULL);
	j = 0;
	if (str[i] == '+')
		i++;
	while (is_digit(str[i]))
	{
		nb[j] = str[i];
		j++;
		i++;
	}
	if (str[i] != '\0')
	{
		free(nb);
		write(1, "Error\n", 6);
		return (0);
	}
	nb[j] = '\0';
	return (nb);
}

char	*arg_check(int argc, char **argv)
{
	if (argc == 2)
		return (argv[1]);
	if (argc == 3)
		return (argv[2]);
	write(1, "Min 1 and max 2 arguments\n", 26);
	return (0);
}
