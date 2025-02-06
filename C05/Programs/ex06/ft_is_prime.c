/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-30 09:38:29 by wheino            #+#    #+#             */
/*   Updated: 2025-01-30 09:38:29 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */
//Prime numbers are natural numbers greater than 1 
//that have no positive divisors other than 1 and themselves.

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div_by_count;

	//If negative or = to 1, not prime.
	if (nb <= 1)
		return (0);

	i = 1;
	div_by_count = 0;
	//Check for divisors from 1 to nb.
	while(i <= nb)
	{
		//If divisible, increase count.
		if (nb % i == 0)
			div_by_count++;
		i++;
	}
	//If divisible by more than 1 and itself, number is not prime
	if (div_by_count > 2)
		return (0);
	else
		return (1); // Else, is prime.
}

int	main(void)
{
	printf("%d", ft_is_prime(7));
	return (0);
}