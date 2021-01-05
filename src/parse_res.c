/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_res.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 23:39:10 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 00:09:54 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_res(char *param, t_app *app)
{
	char	*token;

	if (ft_strcmp(param, "R"))
		return (false);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	app->win.width = ft_atoi(token);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	app->win.height = ft_atoi(token);
	return (true);
}
