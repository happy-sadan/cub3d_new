/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conf_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 03:16:46 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 01:02:13 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_conf_line(char *line)
{
	char	*param;

	return (
			!(param = ft_strtok(line, CONF_DELIM))
			|| parse_res(param)
			|| parse_tex(param)
			|| parse_color(param));
}
