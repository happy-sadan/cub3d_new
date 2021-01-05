/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_tex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 23:43:45 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 00:24:23 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_tex(char *param, t_app *app)
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
	return (
			id != -1
			&& (token = ft_strtok(NULL, CONF_DELIM))
			&& (app->tex[id].p = mlx_xpm_file_to_image(
					app->mlx,
					token,
					&app->tex[id].width,
					&app->tex[id].height)));
}
