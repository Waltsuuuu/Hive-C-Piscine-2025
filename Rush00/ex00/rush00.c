/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:07:41 by erantala          #+#    #+#             */
/*   Updated: 2025/01/18 13:16:13 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printx(int width);

void	rush(int x, int y)
{
	int	loop;
	int	loop_y;

	if (!(y < 1))
		printx(x);
	loop = 1;
	while (loop <= y - 2)
	{
		loop_y = 1;
		while (loop_y <= x)
		{
			if (loop_y >= 2 && loop_y <= x - 1)
				ft_putchar(' ');
			else if (loop_y == 1 || loop_y == x)
			{
				ft_putchar('|');
				if (loop_y == x)
					write (1, "\n", 1);
			}		
			loop_y++;
		}
		loop++;
	}
	if (y > 1)
		printx(x);
}

void	printx( int width)
{
	int	loop ;

	loop = 1;
	while (loop <= width)
	{
		if (loop == 1 || loop == width)
			ft_putchar('o');
		else
			ft_putchar('-');
		if (loop == width)
			write (1, "\n", 1);
		loop++;
	}
}
