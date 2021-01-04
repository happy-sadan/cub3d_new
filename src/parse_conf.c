/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 11:23:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/04 02:44:38 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_conf(char *fn)
{
	int		fd;

	if (ft_memcmp(fn + ft_strlen(fn) - 4, ".cub", 4))
		return (false);
	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return (false);
	return (true);
}
