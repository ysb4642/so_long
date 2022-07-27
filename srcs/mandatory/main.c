/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:43:57 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 00:02:09 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_info	info;

	if (argc != 2)
		print_error("Try again\n", 10);
	init_map(&info, argv[1]);
	mlx_hook(info.win, KEY_PRESS, 0, &check_key, &info);
	mlx_hook(info.win, KEY_EXIT, 0, &ft_close, &info);
	mlx_loop(info.mlx);
}
