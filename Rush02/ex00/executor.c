/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlundaev <vlundaev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:46:35 by vlundaev          #+#    #+#             */
/*   Updated: 2025/02/02 18:47:56 by vlundaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "my_header.h"

int	executor(int argc, char **argv)
{
	char	*number;
	char	*cleaned_number;
	int		i;

	i = 0;
	number = arg_check(argc, argv);
	if (!number)
		return (1);
	cleaned_number = ft_just_number(number);
	if (!cleaned_number)
		return (1);
	while (cleaned_number[i] != '\0')
	{
		write(1, &cleaned_number[i], 1);
		i++;
	}
	write (1, "\n", 1);
	free(cleaned_number);
	return (0);
}
