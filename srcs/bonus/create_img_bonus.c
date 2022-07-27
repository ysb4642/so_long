/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_img_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:42:52 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 14:02:51 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	create_grass(t_info *info, int x, int y)
{
	mlx_put_image_to_window(info->mlx, info->win, info->img.grass,
		x * 50, y * 50);
}

void	creat_rock(t_info *info, int x, int y)
{
	create_grass(info, x, y);
	mlx_put_image_to_window(info->mlx, info->win, info->img.rock,
		x * 50, y * 50);
}

void	create_collection(t_info *info, int x, int y)
{
	create_grass(info, x, y);
	mlx_put_image_to_window(info->mlx, info->win, info->img.collection1,
		x * 50 + 10, y * 50 + 10);
}

void	creat_escape(t_info *info, int x, int y)
{
	create_grass(info, x, y);
	mlx_put_image_to_window(info->mlx, info->win, info->img.escape,
		x * 50 + 10, y * 50 + 10);
}

void	create_img(t_info *info, int i, int j)
{
	if (info->map[i][j] == '1')
		creat_rock(info, j, i);
	else if (info->start == 0 && info->map[i][j] == '0')
		create_grass(info, j, i);
	else if (info->start == 0 && info->map[i][j] == 'P')
	{
		create_grass(info, j, i);
		info->player.x = j;
		info->player.y = i;
	}
	else if (info->start == 0 && info->map[i][j] == 'C')
	{
		create_collection(info, j, i);
		(info->collections)++;
	}
	else if (info->map[i][j] == 'E')
		creat_escape(info, j, i);
	else if (info->start == 0 && info->map[i][j] == 'K')
	{
		create_grass(info, j, i);
		info->enemy.x = j;
		info->enemy.y = i;
		info->enemy.direction = KEY_S;
	}
}
