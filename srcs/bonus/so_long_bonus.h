/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:44:46 by seyeo             #+#    #+#             */
/*   Updated: 2022/07/28 01:11:36 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_player
{
	int	x;
	int	y;
}	t_player;

typedef struct s_enemy
{
	int	x;
	int	y;
	int	direction;
}	t_enemy;

typedef struct s_set
{
	int	player;
	int	enemy;
	int	collection;
	int	escape;
}	t_set;

typedef struct s_img
{
	void	*grass;
	void	*rock;
	void	*player_w1;
	void	*player_w2;
	void	*player_a1;
	void	*player_a2;
	void	*player_s1;
	void	*player_s2;
	void	*player_d1;
	void	*player_d2;
	void	*enemy_w1;
	void	*enemy_w2;
	void	*enemy_a1;
	void	*enemy_a2;
	void	*enemy_s1;
	void	*enemy_s2;
	void	*enemy_d1;
	void	*enemy_d2;
	void	*collection1;
	void	*collection2;
	void	*collection3;
	void	*collection4;
	void	*collection5;
	void	*collection6;
	void	*escape;
}	t_img;

typedef struct s_info
{
	t_img		img;
	t_player	player;
	t_enemy		enemy;
	int			movement;
	int			e_movement;
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

void	load_map(t_info *info, char *map);
char	**set_map(t_info *info, char *map);
int		read_lines(char *map);
int		isvalidfile(char *map);
void	print_error(char *s, int len);
int		is_valid_c(char c);
int		ft_close(t_info *info);
void	init_set(t_set *set);
void	is_valid_map(t_info *info);
void	check_set(t_set set);
void	check_map_setting(t_info *info, int i, int j, t_set *set);
void	check_map(t_info *info, int i, int j);
void	load_imgs(t_info *info, int width, int height);
void	load_imgs2(t_info *info, int img_width, int img_height);
void	load_imgs3(t_info *info, int img_width, int img_height);
void	check_imgs(t_info *info);
void	check_imgs2(t_info *info);
void	init_map(t_info *info, char *map);
void	create_grass(t_info *info, int x, int y);
void	creat_rock(t_info *info, int x, int y);
void	create_collection(t_info *info, int x, int y);
void	creat_escape(t_info *info, int x, int y);
void	create_img(t_info *info, int i, int j);
void	create_player(t_info *info, int key);
void	move_player1(t_info *info, int x, int y, int key);
void	create_player(t_info *info, int key);
void	move_enemy1(t_info *info, int x, int y);
void	move_enemy2(t_info *info, int x, int y);
void	create_enemy(t_info *info);
void	create_map(t_info *info);
char	*ft_itoa(int num);
int		get_next_line(int fd, char **line);
int		ft_strcat(char **str, char c);
char	*set_char(char c, int i);
int		ft_strlen(char *str);
int		check_key(int key, t_info *info);
void	check_player(t_info *info, int key);
void	print_movement(t_info *info);
int		check_rock(int key, t_info *info);
int		is_rock_or_escape(t_info *info, int x, int y);
int		check_enemy(int key, t_info *info);
int		check_collection(int key, t_info *info);
int		check_escape(int key, t_info *info);
int		skel(t_info *info);
void	ft_slowly(t_info *info);
void	move_skel(t_info *info);
int		check_rock_esc_col(t_info *info);
void	is_player(t_info *info, int x, int y);
int		is_rock_esc_col(t_info *info, int x, int y);
void	update_map(t_info *info, int cnt);
void	update_col(t_info *info, int x, int y, int cnt);
void	change_direction(t_info *info);
#endif