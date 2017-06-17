/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:07:37 by dsoporan          #+#    #+#             */
/*   Updated: 2017/06/11 15:13:31 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void		color(t_env *e)
{
	if (e->w->side == 0)
	{
		if (e->w->step_x <= 0)
			e->color = 0xFF0000;
		else
			e->color = 0xFFFF00;
	}
	else
	{
		if (e->w->step_y <= 0)
			e->color = 0x00FF00;
		else
			e->color = 0x0000FF;
	}
}
