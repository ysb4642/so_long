/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skel2_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:10:56 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/28 01:23:33 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	change_direction(t_info *info)
{
	if (info->enemy.direction == KEY_A)
		info->enemy.direction = KEY_W;
	else if (info->enemy.direction == KEY_W)
		info->enemy.direction = KEY_D;
	else if (info->enemy.direction == KEY_D)
		info->enemy.direction = KEY_S;
	else if (info->enemy.direction == KEY_S)
		info->enemy.direction = KEY_A;
}

void	update_col(t_info *info, int x, int y, int cnt)
{
	create_grass(info, x, y);
	if (cnt < 10)
		mlx_put_image_to_window(info->mlx, info->win, info->img.collection1,
			x * 50 + 10, y * 50 + 10);
	else if (cnt < 20)
		mlx_put_image_to_window(info->mlx, info->win, info->img.collection2,
			x * 50 + 10, y * 50 + 10);
	else if (cnt < 30)
		mlx_put_image_to_window(info->mlx, info->win, info->img.collection3,
			x * 50 + 10, y * 50 + 10);
	else if (cnt < 40)
		mlx_put_image_to_window(info->mlx, info->win, info->img.collection4,
			x * 50 + 10, y * 50 + 10);
	else if (cnt < 50)
		mlx_put_image_to_window(info->mlx, info->win, info->img.collection5,
			x * 50 + 10, y * 50 + 10);
	else if (cnt < 60)
		mlx_put_image_to_window(info->mlx, info->win, info->img.collection6,
			x * 50 + 10, y * 50 + 10);
}

void	update_map(t_info *info, int cnt)
{
	int		i;
	int		j;

	i = 0;
	while (i < info->map_height)
	{
		j = 0;
		while (j < info->map_width)
		{
			if (info->map[i][j] == 'C')
			{
				update_col(info, j, i, cnt);
			}
			j++;
		}
		i++;
	}
}

int	is_rock_esc_col(t_info *info, int x, int y)
{
	if (info->map[y][x] == '1' || info->map[y][x] == 'E'
			|| info->map[y][x] == 'C')
		return (1);
	return (0);
}
