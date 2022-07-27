/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_imgs_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:18:13 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 13:56:55 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	load_imgs(t_info *info, int width, int height)
{
	info->img.grass = mlx_xpm_file_to_image(info->mlx,
			"./img/map/Grass.xpm", &width, &height);
	info->img.rock = mlx_xpm_file_to_image(info->mlx,
			"./img/map/Rock.xpm", &width, &height);
	info->img.player_w1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_w.xpm", &width, &height);
	info->img.player_w2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_w2.xpm", &width, &height);
	info->img.player_a1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_a.xpm", &width, &height);
	info->img.player_a2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_a2.xpm", &width, &height);
	info->img.player_s1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_s.xpm", &width, &height);
	info->img.player_s2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_s2.xpm", &width, &height);
	info->img.player_d1 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_d.xpm", &width, &height);
	info->img.player_d2 = mlx_xpm_file_to_image(info->mlx,
			"./img/char/Char_d2.xpm", &width, &height);
}

void	load_imgs2(t_info *info, int img_width, int img_height)
{
	info->img.enemy_w1 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_w.xpm", &img_width, &img_height);
	info->img.enemy_w2 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_w2.xpm", &img_width, &img_height);
	info->img.enemy_a1 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_a.xpm", &img_width, &img_height);
	info->img.enemy_a2 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_a2.xpm", &img_width, &img_height);
	info->img.enemy_s1 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_s.xpm", &img_width, &img_height);
	info->img.enemy_s2 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_s2.xpm", &img_width, &img_height);
	info->img.enemy_d1 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_d.xpm", &img_width, &img_height);
	info->img.enemy_d2 = mlx_xpm_file_to_image(info->mlx,
			"./img/enemy/Skel_d2.xpm", &img_width, &img_height);
}

void	load_imgs3(t_info *info, int img_width, int img_height)
{
	info->img.collection1 = mlx_xpm_file_to_image(info->mlx,
			"./img/collection/Chest.xpm", &img_width, &img_height);
	info->img.collection2 = mlx_xpm_file_to_image(info->mlx,
			"./img/collection/Chest2.xpm", &img_width, &img_height);
	info->img.collection3 = mlx_xpm_file_to_image(info->mlx,
			"./img/collection/Chest3.xpm", &img_width, &img_height);
	info->img.collection4 = mlx_xpm_file_to_image(info->mlx,
			"./img/collection/Chest4.xpm", &img_width, &img_height);
	info->img.collection5 = mlx_xpm_file_to_image(info->mlx,
			"./img/collection/Chest5.xpm", &img_width, &img_height);
	info->img.collection6 = mlx_xpm_file_to_image(info->mlx,
			"./img/collection/Chest6.xpm", &img_width, &img_height);
	info->img.escape = mlx_xpm_file_to_image(info->mlx,
			"./img/map/Escape.xpm", &img_width, &img_height);
	if (info->img.escape == NULL)
		print_error("escape error\n", 13);
}

void	check_imgs(t_info *info)
{
	if (info->img.grass == NULL)
		print_error("grass error\n", 12);
	if (info->img.rock == NULL)
		print_error("rock error\n", 11);
	if (info->img.player_w1 == NULL)
		print_error("player_w1 error\n", 16);
	if (info->img.player_w2 == NULL)
		print_error("player_w2 error\n", 16);
	if (info->img.player_a1 == NULL)
		print_error("player_a1 error\n", 16);
	if (info->img.player_a2 == NULL)
		print_error("player_a2 error\n", 16);
	if (info->img.player_s1 == NULL)
		print_error("player_s1 error\n", 16);
	if (info->img.player_s2 == NULL)
		print_error("player_s2 error\n", 16);
	if (info->img.player_d1 == NULL)
		print_error("player_d1 error\n", 16);
	if (info->img.player_d2 == NULL)
		print_error("player_d2 error\n", 16);
	if (info->img.collection1 == NULL)
		print_error("collection1 error\n", 18);
	if (info->img.collection2 == NULL)
		print_error("collection2 error\n", 18);
}

void	check_imgs2(t_info *info)
{
	if (info->img.collection3 == NULL)
		print_error("collection3 error\n", 18);
	if (info->img.collection4 == NULL)
		print_error("collection4 error\n", 18);
	if (info->img.collection5 == NULL)
		print_error("collection5 error\n", 18);
	if (info->img.collection6 == NULL)
		print_error("collection6 error\n", 18);
	if (info->img.enemy_w1 == NULL)
		print_error("enemy_w1 error\n", 15);
	if (info->img.enemy_w2 == NULL)
		print_error("enemy_w2 error\n", 15);
	if (info->img.enemy_a1 == NULL)
		print_error("enemy_a1 error\n", 15);
	if (info->img.enemy_a2 == NULL)
		print_error("enemy_a2 error\n", 15);
	if (info->img.enemy_s1 == NULL)
		print_error("enemy_s1 error\n", 15);
	if (info->img.enemy_s2 == NULL)
		print_error("enemy_s2 error\n", 15);
	if (info->img.enemy_d1 == NULL)
		print_error("enemy_d1 error\n", 15);
	if (info->img.enemy_d2 == NULL)
		print_error("enemy_d2 error\n", 15);
}
