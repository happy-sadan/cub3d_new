# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/02 21:37:31 by trcottam          #+#    #+#              #
#    Updated: 2021/01/05 23:45:17 by trcottam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Cub3D

SRC = \
	main.c\
	parse_conf.c\
	parse_conf_line.c\
	parse_res.c\
	parse_tex.c\

OBJ = $(SRC:%=$(OBJ_DIR)/%.o)

SRC_DIR = src
OBJ_DIR = obj

MAKE = make
MKDIR = mkdir -p
RM = rm -fr

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I. -Ilibft -Llibft -lft -lmlx -lXext -lX11

.PHONY:		all bonus clean fclean re

.SECONDEXPANSION:

all bonus: $(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C libft
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	$(MAKE) -C libft fclean
	$(RM) $(OBJ_DIR)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

%/:
	$(MKDIR) $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/% | $$(dir $(OBJ_DIR)/%)
	$(CC) $< -c -o $@ $(CFLAGS)
