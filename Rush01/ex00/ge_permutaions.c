/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ge_permutaions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zewang <zewangs@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:25:58 by zewang            #+#    #+#             */
/*   Updated: 2025/01/26 14:26:03 by zewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int		g_permu[24][4];

void	swap(int *a, int *b);
void	generate_permutations(int *arr, int start, int *index);

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	generate_permutations(int *arr, int start, int *index)
{
	int	i;

	if (start == 3)
	{
		i = 0;
		while (i <= 3)
		{
			g_permu[*index][i] = arr[i];
			i++;
		}
		(*index)++;
	}
	i = start;
	while (i <= 3)
	{
		swap(&arr[start], &arr[i]);
		generate_permutations(arr, start + 1, index);
		swap(&arr[start], &arr[i]);
		i++;
	}
}
