/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:33:16 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 13:27:32 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	check_map(t_info *info, int i, int j)
{
	if (!is_valid_c(info->map[i][j]))
		print_error("Invalid map\n", 12);
	if (i == 0 || i == info->map_height - 1
		|| j == 0 || j == info->map_width - 1)
	{
		if (info->map[i][j] != '1')
			print_error("Invalid map\n", 12);
	}
}

void	check_map_setting(t_info *info, int i, int j, t_set *set)
{
	if (info->map[i][j] == 'P')
		set->player++;
	else if (info->map[i][j] == 'K')
		set->enemy++;
	else if (info->map[i][j] == 'C')
		set->collection++;
	else if (info->map[i][j] == 'E')
		set->escape++;
}

void	check_set(t_set set)
{
	if (set.player != 1)
		print_error("player errer\n", 13);
	if (set.enemy != 1)
		print_error("enemy errer\n", 12);
	if (set.collection == 0)
		print_error("collection errer\n", 17);
	if (set.escape == 0)
		print_error("escape error\n", 13);
}

void	is_valid_map(t_info *info)
{
	t_set	set;
	int		i;
	int		j;

	i = 0;
	init_set(&set);
	while (i < info->map_height)
	{
		j = 0;
		if (ft_strlen(info->map[i]) != info->map_width)
			print_error("Map is not square\n", 18);
		while (j < info->map_width)
		{
			check_map(info, i, j);
			check_map_setting(info, i, j, &set);
			j++;
		}
		i++;
	}
	check_set(set);
}
