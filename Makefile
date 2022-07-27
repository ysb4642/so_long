# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seyeo <responsible@kakao.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 00:07:02 by seyeo             #+#    #+#              #
#    Updated: 2022/07/28 00:36:34 by seyeo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror -Imlx
OPTIONS 	= -Lmlx -lmlx -lz -framework OpenGL -framework AppKit
NAME		= so_long
NAME_B		= so_long_bonus
RM 			= rm -rf

DIR_M = ./srcs/mandatory/
DIR_B = ./srcs/bonus/

SRCS_M		= $(DIR_M)check_movement.c\
			  $(DIR_M)check_player.c\
			  $(DIR_M)create_img.c\
			  $(DIR_M)create_map.c\
			  $(DIR_M)create_player.c\
			  $(DIR_M)ft_itoa.c\
			  $(DIR_M)get_next_line.c\
			  $(DIR_M)init.c\
			  $(DIR_M)is_valid_map.c\
			  $(DIR_M)load_map.c\
			  $(DIR_M)main.c\
			  $(DIR_M)set_imgs.c\
			  $(DIR_M)utils.c\

SRCS_B		= $(DIR_B)check_movement_bonus.c\
			  $(DIR_B)check_player_bonus.c\
			  $(DIR_B)create_enemy_bonus.c\
			  $(DIR_B)create_img_bonus.c\
			  $(DIR_B)create_map_bonus.c\
			  $(DIR_B)create_player_bonus.c\
			  $(DIR_B)ft_itoa_bonus.c\
			  $(DIR_B)get_next_line_bonus.c\
			  $(DIR_B)init_bonus.c\
			  $(DIR_B)is_valid_map_bonus.c\
			  $(DIR_B)load_map_bonus.c\
			  $(DIR_B)main_bonus.c\
			  $(DIR_B)set_imgs_bonus.c\
			  $(DIR_B)skel_bonus.c\
			  $(DIR_B)skel2_bonus.c\
			  $(DIR_B)utils_bonus.c\
			  
OBJS_M = $(SRCS_M:%.c=%.o)
OBJS_B = $(SRCS_B:%.c=%.o)

all : $(NAME)

bonus : $(NAME_B)

$(NAME) : ${OBJS_M}
	$(CC) $(CFLAGS) $(OPTIONS) $(OBJS_M) -o $(NAME)

$(NAME_B) : ${OBJS_B}
	$(CC) $(CFLAGS) $(OPTIONS) $(OBJS_B) -o $(NAME_B)

clean:
		$(RM) $(OBJS_M) $(OBJS_B)

fclean: clean
		$(RM) $(NAME) $(NAME_B)

re: $(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus
