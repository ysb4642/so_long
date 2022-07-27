/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_movement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:21:41 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/26 23:59:47 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_escape(int key, t_info *info)
{
	if (key == KEY_W)
	{
		if (info->map[info->player.y - 1][info->player.x]
				== 'E' && info->collections <= 0)
			return (1);
	}
	else if (key == KEY_A)
	{
		if (info->map[info->player.y][info->player.x - 1]
				== 'E' && info->collections <= 0)
			return (1);
	}
	else if (key == KEY_S)
	{
		if (info->map[info->player.y + 1][info->player.x]
				== 'E' && info->collections <= 0)
			return (1);
	}
	else if (key == KEY_D)
	{
		if (info->map[info->player.y][info->player.x + 1]
				== 'E' && info->collections <= 0)
			return (1);
	}
	return (0);
}

int	check_collection(int key, t_info *info)
{
	if (key == KEY_W)
	{
		if (info->map[info->player.y - 1][info->player.x] == 'C')
			return (1);
	}
	else if (key == KEY_A)
	{
		if (info->map[info->player.y][info->player.x - 1] == 'C')
			return (1);
	}
	else if (key == KEY_S)
	{
		if (info->map[info->player.y + 1][info->player.x] == 'C')
			return (1);
	}
	else if (key == KEY_D)
	{
		if (info->map[info->player.y][info->player.x + 1] == 'C')
			return (1);
	}
	return (0);
}

int	is_rock_or_escape(t_info *info, int x, int y)
{
	if (info->map[y][x] == '1' || info->map[y][x] == 'E')
		return (1);
	return (0);
}

int	check_rock(int key, t_info *info)
{
	if (key == KEY_W)
	{
		if (is_rock_or_escape(info, info->player.x, info->player.y - 1))
			return (1);
	}
	else if (key == KEY_A)
	{
		if (is_rock_or_escape(info, info->player.x - 1, info->player.y))
			return (1);
	}
	else if (key == KEY_S)
	{
		if (is_rock_or_escape(info, info->player.x, info->player.y + 1))
			return (1);
	}
	else if (key == KEY_D)
	{
		if (is_rock_or_escape(info, info->player.x + 1, info->player.y))
			return (1);
	}
	return (0);
}