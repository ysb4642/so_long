/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:16:09 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/28 00:38:23 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	isvalidfile(char *map)
{
	int	len;

	len = ft_strlen(map);
	if (len < 5)
		return (0);
	if (map[--len] == 'r')
	{
		if (map[--len] == 'e')
		{
			if (map[--len] == 'b')
			{
				if (map[--len] == '.')
					return (1);
			}
		}
	}
	return (0);
}

int	read_lines(char *map)
{
	int		fd;
	int		line;
	int		readcnt;
	char	c;

	fd = open(map, O_RDONLY);
	if (!fd)
		return (-1);
	line = 0;
	while (1)
	{
		readcnt = read(fd, &c, 1);
		if (readcnt == 0)
			break ;
		if (readcnt < 0)
			return (-1);
		if (c == '\n')
			line++;
	}
	close(fd);
	return (line);
}

char	**set_map(t_info *info, char *map)
{
	char	**vaild_map;
	int		line;

	line = read_lines(map);
	if (line <= 0)
		return (0);
	info->map_height = line;
	vaild_map = (char **)malloc(sizeof(char *) * (line + 1));
	if (vaild_map == NULL)
		return (0);
	return (vaild_map);
}

void	load_map(t_info *info, char *map)
{
	int	i;
	int	fd;

	if (!isvalidfile(map))
		print_error("invalid map\n", 12);
	info->map = set_map(info, map);
	if (info->map == 0)
		print_error("Fail setting map\n", 17);
	fd = open(map, O_RDONLY);
	i = 0;
	while (get_next_line(fd, &info->map[i]))
		i++;
	info->map_width = ft_strlen(info->map[0]);
	info->map[i] = 0;
	close(fd);
}
