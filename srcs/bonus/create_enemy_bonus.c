/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_enemy_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:06:42 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 14:08:31 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_enemy1(t_info *info, int x, int y)
{
	if (info->enemy.direction == KEY_W)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_w1,
			x * 50 + 10, y * 50 + 10);
	}
	else if (info->enemy.direction == KEY_A)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_a1,
			x * 50 + 10, y * 50 + 10);
	}
	else if (info->enemy.direction == KEY_S)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_s1,
			x * 50 + 10, y * 50 + 10);
	}
	else if (info->enemy.direction == KEY_D)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_d1,
			x * 50 + 10, y * 50 + 10);
	}
}

void	move_enemy2(t_info *info, int x, int y)
{
	if (info->enemy.direction == KEY_W)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_w2,
			x * 50 + 10, y * 50 + 10);
	}
	else if (info->enemy.direction == KEY_A)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_a2,
			x * 50 + 10, y * 50 + 10);
	}
	else if (info->enemy.direction == KEY_S)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_s2,
			x * 50 + 10, y * 50 + 10);
	}
	else if (info->enemy.direction == KEY_D)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.enemy_d2,
			x * 50 + 10, y * 50 + 10);
	}
}

void	create_enemy(t_info *info)
{
	create_grass(info, info->enemy.x, info->enemy.y);
	if (info->e_movement % 2 == 0)
		move_enemy1(info, info->enemy.x, info->enemy.y);
	else
		move_enemy2(info, info->enemy.x, info->enemy.y);
}
