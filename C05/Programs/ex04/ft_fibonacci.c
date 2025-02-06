/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-27 15:59:36 by wheino            #+#    #+#             */
/*   Updated: 2025-01-27 15:59:36 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int result;

	//Any index less than 0, return -1
	if (index < 0)
		return (-1);
	//First element is index at index 0, and it is 0.
	if (index == 0)
		return (0);
	//Base case
	if (index == 1)
		return (1);
	//Sum of the two preceeding fibonacci numbers.
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

int	main(void)
{
	printf("%d", ft_fibonacci(55));
	return (0);
}