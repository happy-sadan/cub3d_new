/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 21:47:22 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 00:55:46 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

/*
** THE FOLLOWING DEFINES MUST BE REMOVED AFTER HAVING ADDED ft_printf() AND
** ft_fprintf() TO libft
*/

# define ft_printf printf
# define ft_fprintf fprintf

# include "libft.h"

# include "mlx.h"

# include "fcntl.h"

# define CONF_DELIM ", \t"

typedef enum	e_tex_id {
	TEX_NORTH,
	TEX_EAST,
	TEX_SOUTH,
	TEX_WEST,
	TEX_SPRITE,
}				t_tex_id;

typedef enum	e_color_id {
	COL_FLOOR,
	COL_CEIL,
}				t_color_id;

typedef struct	s_color {
	uint8_t	alpha;
	uint8_t	red;
	uint8_t	green;
	uint8_t	blue;
}				t_color;

typedef struct	s_img {
	void		*p;
	int			width;
	int			height;
}				t_img;

typedef struct	s_win {
	int			width;
	int			height;
}				t_win;

typedef struct	s_app{
	void		*mlx;
	t_win		win;
	t_img		tex[5];
	t_color		color[2];
}				t_app;

bool			parse_conf(char *fn, t_app *app);
bool			parse_conf_line(char *line, t_app *app);
bool			parse_res(char *param, t_app *app);
bool			parse_tex(char *param, t_app *app);
bool			parse_color(char *param, t_app *app);

#endif
