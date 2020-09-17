/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:35:23 by calpha            #+#    #+#             */
/*   Updated: 2020/09/17 20:54:21 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_map(t_data *map)
{
	int x;
	int y;

	y = 0;
	while (y < map->width)
	{
		x = 0;
		while (x < map->length)
		{
			if (x < map->length - 1)
				line(x, y, x + 1, y, map);
			if (y < map->width - 1)
				line(x, y, x, y + 1, map);
			x++;
			printf("%d\n", x);
		}
		y++;
		printf("%d\n", y);
	}
}
