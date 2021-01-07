/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:22:50 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 20:32:32 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_map_line(char *line)
{
	int			x;
	static int	y;

	x = 0;
	while (line[x])
	{
		if (ft_strchr(" 0", line[x]))
			g_conf.map[x][y] = CEL_AIR;
		else if (line[x] == '1')
			g_conf.map[x][y] = CEL_WALL;
		x++;
	}
	y++;
	return (true);
}
