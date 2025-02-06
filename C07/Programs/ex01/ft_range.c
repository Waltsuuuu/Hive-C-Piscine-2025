/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 15:40:46 by wheino            #+#    #+#             */
/*   Updated: 2025-01-29 15:40:46 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == 0)
		return (NULL);
	i = 0;
	j = min;
	while(j < max)
	{
		arr[i] = j;
		i++;
		j++;
	}
	//test 
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//end test
	return (arr);
}

int	main(void)
{
	ft_range(-10, 40);
	return (0);
}