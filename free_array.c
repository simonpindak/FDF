/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:00:27 by calpha            #+#    #+#             */
/*   Updated: 2020/09/25 19:01:39 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	free_array(int ac, void **ar)
{
	int i;

	i = 0;
	while (i < ac)
	{
		free(ar[i]);
		i++;
	}
	free(ar);
}
