/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:44:46 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/27 14:12:43 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_player
{
	int	x;
	int	y;
}	t_player;

typedef struct s_set
{
	int	player;
	int	collection;
	int	escape;
}	t_set;

typedef struct s_img
{
	void	*grass;
	void	*rock;
	void	*w1;
	void	*w2;
	void	*a1;
	void	*a2;
	void	*s1;
	void	*s2;
	void	*d1;
	void	*d2;
	void	*collection1;
	void	*escape;
}	t_img;

typedef struct s_info
{
	t_img		img;
	t_player	player;
	int			movement;
	char		**map;
	void		*mlx;
	void		*win;
	int			start;
	int			collections;
	int			map_width;
	int			map_height;
}	t_info;

# define ROW 11
# define COL 15
# define KEY_PRESS 2
# define KEY_EXIT 17
# define KEY_ESC 53
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2

void	print_error(char *s, int len);
void	load_map(t_info *info, char *map);
char	**set_map(t_info *info, char *map);
int		read_lines(char *map);
int		isvalidfile(char *map);
void	load_map(t_info *info, char *map);
char	**set_map(t_info *info, char *map);
int		read_lines(char *map);
int		isvalidfile(char *map);
int		get_next_line(int fd, char **line);
int		ft_strcat(char **str, char c);
char	*set_char(char c, int i);
int		ft_strlen(char *str);
int		is_valid_c(char c);
void	init_set(t_set *set);
void	check_map(t_info *info, int i, int j);
void	check_map_setting(t_info *info, int i, int j, t_set *set);
void	check_set(t_set set);
void	is_valid_map(t_info *info);
void	init_map(t_info *info, char *map);
void	load_imgs(t_info *info, int width, int height);
void	check_imgs(t_info *info);
void	create_img(t_info *info, int i, int j);
void	creat_escape(t_info *info, int x, int y);
void	create_collection(t_info *info, int x, int y);
void	creat_rock(t_info *info, int x, int y);
void	create_grass(t_info *info, int x, int y);
void	create_map(t_info *info);
void	create_player(t_info *info, int key);
void	move_player1(t_info *info, int x, int y, int key);
void	move_player2(t_info *info, int x, int y, int key);
int		check_escape(int key, t_info *info);
int		check_collection(int key, t_info *info);
int		is_rock_or_escape(t_info *info, int x, int y);
int		check_rock(int key, t_info *info);
void	check_player(t_info *info, int key);
int		check_key(int key, t_info *info);
int		ft_close(t_info *info);
char	*ft_itoa(int num);

#endif