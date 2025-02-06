/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-27 15:13:34 by wheino            #+#    #+#             */
/*   Updated: 2025-01-27 15:13:34 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	//Base case - stops the recursive calling and begins returning values.
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	//Multiply current nb with the result of the recursive call with a decremented power.
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main()
{
	printf("%d", ft_recursive_power(2, 4));
	return (0);
}