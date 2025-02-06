/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlundaev <vlundaev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:00:51 by vlundaev          #+#    #+#             */
/*   Updated: 2025/02/02 15:34:08 by vlundaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "my_header.h"

int	main(int argc, char **argv)
{
	char	*num_dict;

	if (executor(argc, argv) == 1)
		return (0);
	num_dict = numbers_dict_content();
	if (!num_dict)
		return (write(1, "Dict error\n", 11), 0);
	write(1, num_dict, dict_size());
	free(num_dict);
	return (0);
}
