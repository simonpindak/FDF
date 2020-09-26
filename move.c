/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:01:10 by calpha            #+#    #+#             */
/*   Updated: 2020/09/25 18:18:00 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	move(t_data *map)
{
	map->x1 += map->move_x;
	map->x2 += map->move_x;
	map->y1 += map->move_y;
	map->y2 += map->move_y;
}
