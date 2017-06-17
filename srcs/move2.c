/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:08:48 by dsoporan          #+#    #+#             */
/*   Updated: 2017/06/17 13:03:56 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void		straffe_left(t_env *e)
{
	if (map_1((int)(e->w->pos_x - e->w->plane_x * 0.1),
		(int)(e->w->pos_y)) == 0)
		e->w->pos_x -= e->w->plane_x * 0.1;
	if ((map_1((int)(e->w->pos_x),
		(int)(e->w->pos_y - e->w->plane_y * 0.1)) == 0))
		e->w->pos_y -= e->w->plane_y * 0.1;
}

void		straffe_right(t_env *e)
{
	if ((map_1((int)(e->w->pos_x + e->w->plane_x * 0.1),
		(int)(e->w->pos_y)) == 0))
		e->w->pos_x += e->w->plane_x * 0.1;
	if ((map_1((int)(e->w->pos_x),
		(int)(e->w->pos_y + e->w->plane_y * 0.1)) == 0))
		e->w->pos_y += e->w->plane_y * 0.1;
}
