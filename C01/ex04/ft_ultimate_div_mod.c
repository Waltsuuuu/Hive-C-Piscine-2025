/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-18 16:56:18 by wheino            #+#    #+#             */
/*   Updated: 2025-01-18 16:56:18 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_result;
	int	remainder;

	div_result = *a / *b;
	remainder = *a % *b;
	*a = div_result;
	*b = remainder;
}
