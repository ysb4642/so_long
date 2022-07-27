/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:29:30 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/28 00:37:02 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	print_movement(t_info *info)
{
	char	*tmp;

	tmp = ft_itoa(info->movement);
	mlx_string_put(info->mlx, info->win, info->player.x * 50 + 15,
		info->player.y * 50 + 15, 0xFFFFFF, tmp);
	free(tmp);
	tmp = NULL;
}

void	check_player(t_info *info, int key)
{
	if (check_escape(key, info))
		print_error("success!!\n", 10);
	if (check_enemy(key, info))
		print_error("fail\n", 5);
	if (check_collection(key, info))
		(info->collections)--;
	if (!(check_rock(key, info)))
	{
		create_grass(info, info->player.x, info->player.y);
		info->map[info->player.y][info->player.x] = '0';
		if (key == KEY_W)
			info->player.y -= 1;
		else if (key == KEY_A)
			info->player.x -= 1;
		else if (key == KEY_S)
			info->player.y += 1;
		else if (key == KEY_D)
			info->player.x += 1;
		info->map[info->player.y][info->player.x] = 'P';
		(info->movement++);
	}
	create_player(info, key);
	print_movement(info);
}

int	check_key(int key, t_info *info)
{
	if (key == KEY_ESC)
		exit(0);
	else if (key == KEY_W || key == KEY_A || key == KEY_S
		|| key == KEY_D)
		check_player(info, key);
	return (0);
}
