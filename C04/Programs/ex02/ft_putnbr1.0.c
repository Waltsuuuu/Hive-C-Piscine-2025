/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-23 10:58:45 by wheino            #+#    #+#             */
/*   Updated: 2025-01-23 10:58:45 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int i;
	char digits[12];

	if (nb < 0)
	{
		write(1, "-",1);
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		int digit = nb % 10; //Extract the last digit from nb
		int num = '0' + digit; //Convert digit to corresponding character
		digits[i] = num;
		nb = nb / 10; //Remove last digt from nb
		i++;
	}

	i = 12;
	while (i >= 0)
	{
		write(1, &digits[i], 1);
		i--;
	}
	while (i <= 12)
	{
		digits[i] = '\0';
		i++;
	}
}

int main()
{
	//ft_putnbr(555555);
	//write(1, "\n", 1);
	//ft_putnbr(-2147483647);
	//write(1, "\n", 1);
	ft_putnbr(-11555666);
	// write(1, "\n", 1);

	return 0;
}