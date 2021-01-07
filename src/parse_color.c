/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 00:42:35 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 00:48:28 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_color(char *param)
{
	int		id;
	char	*token;

	id = -1;
	if (!ft_strcmp(param, "F"))
		id = COL_FLOOR;
	if (!ft_strcmp(param, "C"))
		id = COL_CEIL;
	if (id == -1 || !(g_conf.color[id] = malloc(sizeof(t_color))))
		return (false);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	g_conf.color[id]->red = ft_atoi(token);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	g_conf.color[id]->green = ft_atoi(token);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	g_conf.color[id]->blue = ft_atoi(token);
	return (true);
}
