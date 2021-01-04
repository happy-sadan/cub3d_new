/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 21:47:22 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/04 03:05:20 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H


// THE FOLLOWING DEFINES MUST BE REMOVED AFTER HAVING ADDED ft_printf() AND
// ft_fprintf() TO libft

# define ft_printf printf
# define ft_fprintf fprintf


# include "libft.h"

# include "fcntl.h"

bool	parse_conf(char *fn);

#endif
