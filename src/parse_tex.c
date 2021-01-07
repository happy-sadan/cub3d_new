/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_tex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 23:43:45 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 01:00:56 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_tex(char *param)
{
	int		id;
	char	*token;

	id = -1;
	if (!ft_strcmp(param, "NO"))
		id = TEX_NORTH;
	if (!ft_strcmp(param, "EA"))
		id = TEX_EAST;
	if (!ft_strcmp(param, "SO"))
		id = TEX_SOUTH;
	if (!ft_strcmp(param, "WE"))
		id = TEX_WEST;
	if (!ft_strcmp(param, "S"))
		id = TEX_SPRITE;
	if (id == -1)
		return (false);
	if (!(g_conf.tex[id] = malloc(sizeof(t_img))))
		return (false);
	return (
			(token = ft_strtok(NULL, CONF_DELIM))
			&& (g_conf.tex[id]->p = mlx_xpm_file_to_image(
					g_mlx,
					token,
					&g_conf.tex[id]->width,
					&g_conf.tex[id]->height)));
}
