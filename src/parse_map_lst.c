/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 21:02:36 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 01:00:41 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_map_lst(t_list *lst)
{
	t_list	*line;

	line = lst;
	while (line)
	{
		if ((int)ft_strlen(line->data) > g_conf.map_width)
			g_conf.map_width = ft_strlen(line->data);
		g_conf.map_height++;
		line = line->next;
	}
	if (!(init_map()))
		return (false);
	line = lst;
	while (line)
	{
		if (!(parse_map_line(line->data)))
			return (false);
		line = line->next;
	}
	return (true);
}
