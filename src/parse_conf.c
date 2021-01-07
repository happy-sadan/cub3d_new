/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 11:23:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 01:59:19 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_conf(char *fn)
{
	int		fd;
	t_list	*conf_lst;
	t_list	*map_lst;

	if (
			ft_memcmp(fn + ft_strlen(fn) - 4, ".cub", 4)
			|| (fd = open(fn, O_RDONLY)) == -1
			|| !(conf_lst = get_conf_lst(fd))
			|| !(map_lst = parse_conf_lst(conf_lst))
			|| !(parse_map_lst(map_lst)))
		return (false);
	ft_lstclear(&conf_lst, &free);
	return (true);
}
