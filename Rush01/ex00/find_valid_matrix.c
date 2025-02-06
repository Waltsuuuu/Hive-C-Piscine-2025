/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_valid_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zewang <zewangs@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:53:55 by zewang            #+#    #+#             */
/*   Updated: 2025/01/26 14:53:58 by zewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int		g_matrix[4][4];
extern int		g_matrix_c;
extern int		g_out[36][4][4];
extern int		g_permu[24][4];

int		is_safe(int arr[4], int *head_tail);
void	store_matrix(void);
void	find(int h_d[4][2], int depth);

void	store_matrix(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			g_out[g_matrix_c][i][j] = g_matrix[i][j];
			j++;
		}
		i++;
	}
}

void	find(int h_d[][2], int depth)
{
	int	i;
	int	j;

	if (depth == 4)
	{
		store_matrix();
		g_matrix_c++;
		return ;
	}
	i = 0;
	while (i < 24)
	{
		if (is_safe(g_permu[i], h_d[depth]))
		{
			j = 0;
			while (j < 4)
			{
				g_matrix[depth][j] = g_permu[i][j];
				j++;
			}
			find(h_d, depth + 1);
		}
		i++;
	}
}
