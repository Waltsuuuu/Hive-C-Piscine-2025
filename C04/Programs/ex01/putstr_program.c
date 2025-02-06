/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_program.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-23 10:56:10 by wheino            #+#    #+#             */
/*   Updated: 2025-01-23 10:56:10 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char str[] = "Hello  55";

	ft_putstr(str);
	return 0;
}