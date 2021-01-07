/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conf_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 01:50:58 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/07 02:00:02 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_list	*parse_conf_lst(t_list *lst)
{
	while (lst && !is_valid_map_line(lst->data))
	{
		if (!(parse_conf_line(lst->data)))
			return (false);
		lst = lst->next;
	}
	return (lst);
}
