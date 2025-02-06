/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:46:46 by erantala          #+#    #+#             */
/*   Updated: 2025/01/18 15:08:16 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	ft_putchar(char c);

void	printx(int width, int loops);

void	rush(int x, int y)
{
	int	loop;
	int	loop_y;

	if (!(y < 1))
		printx(x, 1);
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
				ft_putchar('B');
				if (loop_y == x)
					write (1, "\n", 1);
			}		
			loop_y++;
		}
		loop++;
	}
	if (!(y < 2))
		printx(x, 2);
}

void	printx(int width, int loops)
{
	int		loop;
	char	print1;
	char	print2;

	loop = 1;
	while (loop <= width)
	{
		print1 = 'A';
		print2 = 'C';
		if (loops == 2)
		{
			print1 = 'C';
			print2 = 'A';
		}
		if (loop == 1)
			ft_putchar(print1);
		else if (loop == width)
			ft_putchar(print2);
		else
			ft_putchar('B');
		if (loop == width)
			write (1, "\n", 1);
		loop++;
	}
}
