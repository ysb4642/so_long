/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_player_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:59:04 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 14:05:11 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_player2(t_info *info, int x, int y, int key)
{
	if (key == KEY_W)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_w2,
			x * 50 + 10, y * 50 + 10);
	}
	else if (key == KEY_A)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_a2,
			x * 50 + 10, y * 50 + 10);
	}
	else if (key == KEY_S)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_s2,
			x * 50 + 10, y * 50 + 10);
	}
	else if (key == KEY_D)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_d2,
			x * 50 + 10, y * 50 + 10);
	}
}

void	move_player1(t_info *info, int x, int y, int key)
{
	if (key == KEY_W)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_w1,
			x * 50 + 10, y * 50 + 10);
	}
	else if (key == KEY_A)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_a1,
			x * 50 + 10, y * 50 + 10);
	}
	else if (key == KEY_S)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_s1,
			x * 50 + 10, y * 50 + 10);
	}
	else if (key == KEY_D)
	{
		mlx_put_image_to_window(info->mlx, info->win, info->img.player_d1,
			x * 50 + 10, y * 50 + 10);
	}
}

void	create_player(t_info *info, int key)
{
	create_grass(info, info->player.x, info->player.y);
	if (info->movement % 2 == 0)
		move_player1(info, info->player.x, info->player.y, key);
	else
		move_player2(info, info->player.x, info->player.y, key);
}
