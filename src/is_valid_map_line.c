/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:05:33 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 20:56:24 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	is_valid_map_line(char *line)
{
	while (*line == ' ')
		line++;
	if (!*line)
		return (false);
	while (*line && ft_strchr(" 012NSWE", *line))
		line++;
	return (!*line);
}
