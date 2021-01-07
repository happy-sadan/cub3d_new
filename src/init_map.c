/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 21:01:59 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 21:02:06 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	init_map(void)
{
	int	x;

	if (!(g_conf.map = malloc(sizeof(int *) * g_conf.map_width)))
		return (false);
	x = 0;
	while (x < g_conf.map_width)
	{
		if (!(g_conf.map[x] = ft_calloc(g_conf.map_height, sizeof(int))))
			return (false);
		x++;
	}
	return (true);
}
