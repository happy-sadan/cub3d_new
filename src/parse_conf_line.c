/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conf_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 03:16:46 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/05 11:07:24 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_conf_line(char *line, t_app *app)
{
	char	*param;
	char	*token;

	if (!(param = ft_strtok(line, CONF_DELIM)))
		return (true);
	if (!ft_strcmp(param, "R"))
	{
		if (!(token = ft_strtok(NULL, CONF_DELIM)))
			return (false);
		app->win.width = ft_atoi(token);
		if (!(token = ft_strtok(NULL, CONF_DELIM)))
			return (false);
		app->win.height = ft_atoi(token);
		return (true);
	}
	return (false);
}
