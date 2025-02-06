/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlundaev <vlundaev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:48:12 by vlundaev          #+#    #+#             */
/*   Updated: 2025/02/02 18:48:26 by vlundaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	skip_whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	count_digits(char *str, int i)
{
	int	count;

	count = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (is_digit(str[i]))
	{
		count++;
		i++;
	}
	return (count);
}
