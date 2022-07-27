/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:10:49 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/28 00:24:04 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_close(t_info *info)
{
	(void) info;
	exit(0);
}

int	is_valid_c(char c)
{
	if (c == '1' || c == '0' || c == 'C'
		|| c == 'E' || c == 'P' || c == 'K')
		return (1);
	return (0);
}

void	print_error(char *s, int len)
{
	write(1, s, len);
	exit(1);
}
