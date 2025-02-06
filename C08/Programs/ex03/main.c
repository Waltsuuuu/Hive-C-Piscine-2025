/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 13:23:56 by wheino            #+#    #+#             */
/*   Updated: 2025-02-04 13:23:56 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);

	//Test
	printf("point.x = %d\npoint.y = %d\n", point.x, point.y);
	//End test
	return (0);
}