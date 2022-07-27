/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:43:57 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/28 00:24:06 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int argc, char *argv[])
{
	t_info	info;

	if (argc != 2)
		print_error("Try again\n", 10);
	init_map(&info, argv[1]);
	mlx_hook(info.win, KEY_PRESS, 0, &check_key, &info);
	mlx_hook(info.win, KEY_EXIT, 0, &ft_close, &info);
	mlx_loop_hook(info.mlx, &skel, &info);
	mlx_loop(info.mlx);
}
