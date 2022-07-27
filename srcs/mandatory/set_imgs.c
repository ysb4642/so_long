/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_imgs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:18:13 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 00:50:48 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_imgs(t_info *info, int width, int height)
{
	info->img.grass = mlx_xpm_file_to_image(info->mlx,
			"./img/map/Grass.xpm", &width, &height);
	info->img.rock = mlx_xpm_file_to_image(info->mlx,
			"./img/map/Rock.xpm", &width, &height);
	info->img.w1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_w.xpm", &width, &height);
	info->img.w2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_w2.xpm", &width, &height);
	info->img.a1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_a.xpm", &width, &height);
	info->img.a2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_a2.xpm", &width, &height);
	info->img.s1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_s.xpm", &width, &height);
	info->img.s2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_s2.xpm", &width, &height);
	info->img.d1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_d.xpm", &width, &height);
	info->img.d2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_d2.xpm", &width, &height);
	info->img.collection1 = mlx_xpm_file_to_image(info->mlx,
			"./img/collection/Chest.xpm", &width, &height);
	info->img.escape = mlx_xpm_file_to_image(info->mlx,
			"./img/map/Escape.xpm", &width, &height);
}

void	check_imgs(t_info *info)
{
	if (info->img.grass == NULL)
		print_error("grass error\n", 12);
	if (info->img.rock == NULL)
		print_error("rock error\n", 11);
	if (info->img.w1 == NULL)
		print_error("w1 error\n", 9);
	if (info->img.w2 == NULL)
		print_error("w2 error\n", 9);
	if (info->img.a1 == NULL)
		print_error("a1 error\n", 9);
	if (info->img.a2 == NULL)
		print_error("a2 error\n", 9);
	if (info->img.s1 == NULL)
		print_error("s1 error\n", 9);
	if (info->img.s2 == NULL)
		print_error("s2 error\n", 9);
	if (info->img.d1 == NULL)
		print_error("d1 error\n", 9);
	if (info->img.d2 == NULL)
		print_error("d2 error\n", 9);
	if (info->img.collection1 == NULL)
		print_error("collection1 error\n", 18);
	if (info->img.escape == NULL)
		print_error("escape error\n", 13);
}
