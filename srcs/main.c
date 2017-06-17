/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:08:32 by dsoporan          #+#    #+#             */
/*   Updated: 2017/06/17 13:11:28 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

int			main(int argc, char **argv)
{
	t_env	*env;

	if (argc != 1)
		error("Error");
	(void)argv;
	env = (t_env *)malloc(sizeof(t_env) * 1);
	env->mlx = mlx_init();
	env->win = mlx_new_window(env->mlx, WIDTH, HEIGHT, "Wolf3D");
	init_img_value(env);
	init_env_value(env);
	mlx_hook(env->win, KEYPRESS, KEYPRESS_MASK, &key_hook, env);
	mlx_hook(env->win, KEYRELEASE, KEYRELEASE_MASK, &key_release, env);
	mlx_hook(env->win, DESTROY_NOTIFY, DESTROY_MASK, &quit_program, env);
	mlx_loop_hook(env->mlx, &expose_hook, env);
	mlx_loop(env->mlx);
	return (0);
}
