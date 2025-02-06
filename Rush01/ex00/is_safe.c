/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zewang <zewangs@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:31:35 by zewang            #+#    #+#             */
/*   Updated: 2025/01/26 14:31:39 by zewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculate_head(int arr[4]);
int	calculate_tail(int arr[4]);
int	is_safe(int arr[4], int *head_tail);

int	calculate_head(int arr[4])
{
	int	head;
	int	highest;
	int	i;

	head = 1;
	highest = arr[0];
	i = 1;
	while (i < 4)
	{
		if (arr[i] > highest)
		{
			highest = arr[i];
			head++;
		}
		i++;
	}
	return (head);
}

int	calculate_tail(int arr[4])
{
	int	tail;
	int	highest;
	int	i;

	tail = 1;
	highest = arr[3];
	i = 3;
	while (i >= 0)
	{
		if (arr[i] > highest)
		{
			highest = arr[i];
			tail++;
		}
		i--;
	}
	return (tail);
}

int	is_safe(int arr[4], int *head_tail)
{
	int	head;
	int	tail;

	head = calculate_head(arr);
	tail = calculate_tail(arr);
	if (head == head_tail[0] && tail == head_tail[1])
		return (1);
	else
		return (0);
}
