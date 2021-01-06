/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 00:42:35 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 00:54:55 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_color(char *param, t_app *app)
{
	int		id;
	char	*token;

	id = -1;
	if (!ft_strcmp(param, "F"))
		id = COL_FLOOR;
	if (!ft_strcmp(param, "C"))
		id = COL_CEIL;
	if (id == -1)
		return (false);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	app->color[id].red = ft_atoi(token);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	app->color[id].green = ft_atoi(token);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	app->color[id].blue = ft_atoi(token);
	return (true);
}
