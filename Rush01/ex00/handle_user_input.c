/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_user_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-26 18:11:40 by wheino            #+#    #+#             */
/*   Updated: 2025-01-26 18:11:40 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

int	arg_checker(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	if (argv[1] == 0)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	check_strl(char *strg)
{
	int	i;
	int	sc;

	if (ft_strlen(strg) != 31)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	i = 0;
	sc = 0;
	while (strg[i] != '\0')
	{
		if (strg[i] == ' ')
			sc++;
		i++;
	}
	if (sc != 15)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	atoi_conversion(char *strg, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (check_strl(strg))
		return (1);
	while (strg[i] != '\0')
	{
		if ((!(strg[i] >= '1' && strg[i] <= '4'))
			&& (!(strg[i] == ' '))
			&& (!(strg[i] == '"')))
		{
			write (1, "Error\n", 6);
			return (1);
		}
		if (strg[i] >= '0' && strg[i] <= '4')
		{
			clues[j] = clues[j] * 10 + (strg[i] - '0');
			i++;
			j++;
		}
		i++;
	}
	return (0);
}

void	make_2d_array(int clues[], int head_tail_1[][2], int head_tail_2[][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		head_tail_1[i][0] = clues[8 + i];
		head_tail_1[i][1] = clues[12 + i];
		head_tail_2[i][0] = clues[i];
		head_tail_2[i][1] = clues[4 + 1];
		i++;
	}
}
