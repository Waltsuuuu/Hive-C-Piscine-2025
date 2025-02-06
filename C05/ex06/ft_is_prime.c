/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-30 09:38:29 by wheino            #+#    #+#             */
/*   Updated: 2025-01-30 09:38:29 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	div_by_count;

	if (nb <= 1)
		return (0);
	i = 1;
	div_by_count = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			div_by_count++;
		i++;
	}
	if (div_by_count > 2)
		return (0);
	else
		return (1);
}
