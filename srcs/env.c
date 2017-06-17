/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:07:59 by dsoporan          #+#    #+#             */
/*   Updated: 2017/06/17 13:03:52 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void		init_arrow(t_arrow *key)
{
	key->up = 0;
	key->right = 0;
	key->down = 0;
	key->left = 0;
}

void		init_img_value(t_env *e)
{
	e->img.img = mlx_new_image(e->mlx, WIDTH, HEIGHT);
	e->img.data = mlx_get_data_addr(e->img.img, &(e->img.bpp),
		&(e->img.sline), &(e->img.endian));
}

t_w3d		*init_w3d(void)
{
	t_w3d	*w;

	w = (t_w3d*)malloc(sizeof(t_w3d) * 1);
	w->pos_x = 18;
	w->pos_y = 18;
	w->dir_x = -1;
	w->dir_y = 0;
	w->plane_x = 0.0;
	w->plane_y = 0.66;
	return (w);
}

void		init_env_value(t_env *e)
{
	init_arrow(&e->key);
	e->w = init_w3d();
}
