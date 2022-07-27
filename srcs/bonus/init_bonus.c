/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:35:24 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 13:57:49 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	init_set(t_set *set)
{
	set->player = 0;
	set->enemy = 0;
	set->collection = 0;
	set->escape = 0;
}

void	init_map(t_info *info, char *map)
{
	load_map(info, map);
	is_valid_map(info);
	info->mlx = mlx_init();
	info->movement = 0;
	info->e_movement = 0;
	info->win = mlx_new_window(info->mlx,
			50 * info->map_width, 50 * info->map_height, "so_long_bonus");
	if (info->mlx == NULL || info->win == NULL)
		print_error("mlx or window error\n", 20);
	info->start = 0;
	info->collections = 0;
	load_imgs(info, 0, 0);
	load_imgs2(info, 0, 0);
	load_imgs3(info, 0, 0);
	check_imgs(info);
	check_imgs2(info);
	info->enemy.x = -1;
	info->enemy.y = -1;
	create_map(info);
}
