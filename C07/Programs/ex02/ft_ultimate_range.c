/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-30 12:53:05 by wheino            #+#    #+#             */
/*   Updated: 2025-01-30 12:53:05 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1); 
	i = 0;
	j = min;
	while (j < max)
	{
		//Same as arr[i], if we were in main.
		(*range)[i] = j;
		i++;
		j++;
	}
	return (i);	
}

int	main(void)
{
	int *arr;
	int max;
	int min;

	//int **p_arr = &arr;

	max = 10;
	min = 0;
	
	printf("%d\n", 	ft_ultimate_range(&arr, min, max));
	return (0);
}