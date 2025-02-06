/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_in_cols.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zewang <zewangs@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:29:43 by zewang            #+#    #+#             */
/*   Updated: 2025/01/26 15:29:45 by zewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int		g_matrix[4][4];
extern int		g_matrix_c;
extern int		g_out[36][4][4];
extern int		g_permu[24][4];

int		is_safe(int arr[4], int *head_tail);
void	output_matrix(int succeed);
int		has_equal_elements(int arr[4]);
void	transpose_matrix(int from[4][4], int to[4][4]);
int		check_in_cols(int head_tail[][2]);

void	output_matrix(int succeed)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			g_matrix[i][j] = g_out[succeed][i][j];
			j++;
		}
		i++;
	}
}

int	has_equal_elements(int arr[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	transpose_matrix(int from[4][4], int to[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			to[j][i] = from[i][j];
			j++;
		}
		i++;
	}
}

int	check(int head_tail[][2], int r)
{
	int	i;
	int	trans[4][4];

	transpose_matrix(g_out[r], trans);
	i = 0;
	while (i < 4)
	{
		if (has_equal_elements(trans[i]) || !is_safe(trans[i], head_tail[i]))
			return (1);
		i++;
	}
	return (0);
}

int	check_in_cols(int head_tail[][2])
{
	int	r;
	int	safe;

	r = 0;
	while (r < g_matrix_c)
	{
		safe = check(head_tail, r);
		if (safe)
		{
			output_matrix(r);
			return (0);
		}
		r++;
	}
	return (1);
}
