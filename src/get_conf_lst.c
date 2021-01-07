/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_conf_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 00:15:02 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 00:25:19 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_list	*get_conf_lst(int fd)
{
	t_list	*conf;
	int		gnl_ret;
	char	*line;
	t_list	*line_lst;

	conf = NULL;
	while ((gnl_ret = get_next_line(fd, &line)))
	{
		if (gnl_ret == -1 || !(line_lst = ft_lstnew(line)))
			return (NULL);
		ft_lstadd_back(&conf, line_lst);
	}
	free(line);
	return (conf);
}
