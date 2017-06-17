/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:08:23 by dsoporan          #+#    #+#             */
/*   Updated: 2017/06/11 15:04:54 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

int				key_hook2(int keycode, t_env *e)
{
	if (keycode == KEY_A)
		straffe_left(e);
	if (keycode == KEY_D)
		straffe_right(e);
	return (0);
}

int				key_hook(int keycode, t_env *e)
{
	if (keycode == KEY_UP)
		e->key.up = 1;
	if (keycode == KEY_RIGHT)
		e->key.right = 1;
	if (keycode == KEY_DOWN)
		e->key.down = 1;
	if (keycode == KEY_LEFT)
		e->key.left = 1;
	if (keycode == ECHAP)
		quit_program(e);
	key_hook2(keycode, e);
	expose_hook(e);
	return (0);
}
