/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 11:23:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 00:04:35 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_conf(char *fn, t_app *app)
{
	int		fd;
	char	*line;
	int		gnl_return;
	bool	line_parse_success;

	if (ft_memcmp(fn + ft_strlen(fn) - 4, ".cub", 4))
		return (false);
	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return (false);
	while ((gnl_return = get_next_line(fd, &line)))
	{
		line_parse_success = parse_conf_line((char *)line, app);
		free(line);
		if (gnl_return == -1 || !line_parse_success)
			return (false);
	}
	return (true);
}
