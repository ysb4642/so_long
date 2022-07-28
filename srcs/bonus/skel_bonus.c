/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skel_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:05:33 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/28 14:04:35 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	is_player(t_info *info, int x, int y)
{
	if (info->map[y][x] == 'P')
	{
		print_error("fail\n", 5);
	}
}

int	check_rock_esc_col(t_info *info)
{
	if (info->enemy.direction == KEY_W)
	{
		is_player(info, info->enemy.x, info->enemy.y - 1);
		if (is_rock_esc_col(info, info->enemy.x, info->enemy.y - 1))
			return (0);
	}
	else if (info->enemy.direction == KEY_A)
	{
		is_player(info, info->enemy.x - 1, info->enemy.y);
		if (is_rock_esc_col(info, info->enemy.x - 1, info->enemy.y))
			return (0);
	}
	else if (info->enemy.direction == KEY_S)
	{
		is_player(info, info->enemy.x, info->enemy.y + 1);
		if (is_rock_esc_col(info, info->enemy.x, info->enemy.y + 1))
			return (0);
	}
	else if (info->enemy.direction == KEY_D)
	{
		is_player(info, info->enemy.x + 1, info->enemy.y);
		if (is_rock_esc_col(info, info->enemy.x + 1, info->enemy.y))
			return (0);
	}
	return (1);
}

void	move_skel(t_info *info)
{
	if (check_rock_esc_col(info))
	{
		create_grass(info, info->enemy.x, info->enemy.y);
		info->map[info->enemy.y][info->enemy.x] = '0';
		if (info->enemy.direction == KEY_W)
			info->enemy.y -= 1;
		else if (info->enemy.direction == KEY_A)
			info->enemy.x -= 1;
		else if (info->enemy.direction == KEY_S)
			info->enemy.y += 1;
		else if (info->enemy.direction == KEY_D)
			info->enemy.x += 1;
		info->map[info->enemy.y][info->enemy.x] = 'K';
		(info->e_movement++);
	}
	else
		change_direction(info);
	create_enemy(info);
}

void	ft_slowly(t_info *info)
{
	int	i;

	if (info->collections <= 0)
	{
		i = 0;
		while (i < 100000000)
			i++;
	}
}

int	skel(t_info *info)
{
	static int	cnt = 0;

	if (cnt < 30)
	{
		update_map(info, cnt);
		cnt++;
	}
	else if (cnt < 60)
	{
		update_map(info, cnt);
		cnt++;
	}
	else
		cnt = 0;
	if (cnt == 1)
	{
		ft_slowly(info);
		move_skel(info);
	}
	return (0);
}
