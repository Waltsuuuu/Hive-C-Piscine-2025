/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-02 09:59:51 by wheino            #+#    #+#             */
/*   Updated: 2025-02-02 09:59:51 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>		// close() && read()
#include <stdlib.h>		// malloc() && free()
#include "structs.h"	

int				dict_size(void);
char			*numbers_dict_content(void);
int				ft_strlen(char *str);
t_keys_values	*parse_dict(char *file_content, int *pair_count);

void	free_pairs(t_keys_values *pairs, int *pair_count)
{
	int	i;

	i = 0;
	while (i < *pair_count) {
    	free(pairs[i].key);
    	free(pairs[i].value);
    	i++;
	}
}

int	main(int argc, char *argv[])
{
	char			*num_dict;
	int				pair_count;
	t_keys_values	*pairs;

	num_dict = numbers_dict_content();
	if (!num_dict)
		return (write(1, "Dict error\n", 11), 0);
	pair_count = 0;
	pairs = parse_dict(num_dict, &pair_count);


	write(1, pairs[4].value, ft_strlen(pairs[4].value));
	free_pairs(pairs, &pair_count);
	free(num_dict);
	return (0);
}
