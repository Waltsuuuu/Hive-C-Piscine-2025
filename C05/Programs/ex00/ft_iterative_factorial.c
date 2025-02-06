/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-27 09:20:22 by wheino            #+#    #+#             */
/*   Updated: 2025-01-27 09:20:22 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while(i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return 0;
}