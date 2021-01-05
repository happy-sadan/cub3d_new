/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 21:44:16 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 00:30:45 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char *argv[])
{
	t_app	app;

	if (!(app.mlx = mlx_init()))
	{
		ft_fprintf(stderr, "Error\nMinilibX initialization unsuccessful\n");
		return (5);
	}
	if (argc < 2)
	{
		ft_fprintf(stderr, "Error\nConfig filename not set\n");
		return (3);
	}
	if (!(parse_conf(argv[1], &app)))
	{
		ft_fprintf(stderr, "Error\nCould not parse config\n");
		return (4);
	}
	return (0);
}
