/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zewang <zewangs@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:21:01 by zewang            #+#    #+#             */
/*   Updated: 2025/01/26 20:21:05 by zewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int		g_matrix[4][4];
extern int		g_matrix_c;
extern int		g_out[36][4][4];
extern int		g_permu[24][4];

void	generate_permutations(int *arr, int start, int *index);
void	find(int h_d[4][2], int depth);
int		check_in_cols(int head_tail[][2]);
void	print_rusult(void);
int		arg_checker(int argc, char *argv[]);
int		atoi_conversion(char *strg, int *clues);
void	make_2d_array(int clues[], int head_tail_1[][2], int head_tail_2[][2]);
char	*ft_strcpy(char *dest, char *src);

void	print_rusult(void)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			a = g_matrix[i][j] + '0';
			write(1, &a, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	get_head_tail(int argc, char *argv[], int ht1[][2], int ht2[][2])
{
	int		clues[16];
	char	user_input[36];
	int		i;

	user_input[0] = '\0';
	i = 0;
	while (i < 16)
	{
		clues[i] = 0;
		i++;
	}
	if (arg_checker(argc, argv) != 0)
		return (1);
	ft_strcpy(user_input, argv[1]);
	if (atoi_conversion(user_input, clues) != 0)
		return (1);
	make_2d_array(&clues[0], ht1, ht2);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		arr[4];
	int		index;
	int		head_tail_1[4][2];
	int		head_tail_2[4][2];

	if (get_head_tail(argc, argv, head_tail_1, head_tail_2))
		return (0);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	index = 0;
	generate_permutations(arr, 0, &index);
	find(head_tail_1, 0);
	if (check_in_cols(head_tail_2) == 0)
	{
		print_rusult();
	}
	else
		write (1, "Error\n", 6);
	return (0);
}
