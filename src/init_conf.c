/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_conf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 21:04:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 00:38:48 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_conf(void)
{
	int	i;

	g_conf.win.width = 0;
	g_conf.win.height = 0;
	g_conf.map = NULL;
	g_conf.map_width = 0;
	g_conf.map_height = 0;
	i = 0;
	while (i < 5)
	{
		g_conf.tex[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 2)
	{
		g_conf.color[i] = NULL;
		i++;
	}
}
