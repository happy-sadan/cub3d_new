/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_res.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 23:39:10 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 00:45:06 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_res(char *param)
{
	char	*token;

	if (ft_strcmp(param, "R"))
		return (false);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	g_conf.win.width = ft_atoi(token);
	if (!(token = ft_strtok(NULL, CONF_DELIM)))
		return (false);
	g_conf.win.height = ft_atoi(token);
	return (true);
}
