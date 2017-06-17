# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/11 14:54:41 by dsoporan          #+#    #+#              #
#    Updated: 2017/06/17 13:12:28 by dsoporan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d
LIBFT = libft/libft.a
MINILIBX = minilibx/libmlx.a
SRC_NAME = *.c
OBJ_PATH = obj
SRC_PATH = srcs
HEADER = includes/wolf3d.h
INC = -I includes -I libft/includes
CFLAGS = -Wall -Wextra -Werror

OBJ = $(OBJ_PATH)/display.o \
	$(OBJ_PATH)/color.o \
	$(OBJ_PATH)/env.o \
	$(OBJ_PATH)/error.o \
	$(OBJ_PATH)/expose_hook.o \
	$(OBJ_PATH)/features.o \
	$(OBJ_PATH)/key_hook.o \
	$(OBJ_PATH)/key_release.o \
	$(OBJ_PATH)/main.o \
	$(OBJ_PATH)/map.o \
	$(OBJ_PATH)/move.o \
	$(OBJ_PATH)/move2.o \
	$(OBJ_PATH)/wolf3d.o

LIBX = -lm -L libft/ -lft -I/usr/local/include -I/usr/local/lib \
	   -L minilibx/ -lmlx -framework OpenGL -framework AppKit

VPATH = srcs

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft/
	@make -C ./minilibx/
	@gcc $(LIBX) $(INC) $(OBJ) -o $(NAME)

$(OBJ_PATH)/%.o: %.c $(HEADER)
	@mkdir -p $(OBJ_PATH)
	@gcc -c $(CFLAGS) $(INC) $< -o $@

clean:
	@rm -fv $(OBJ)
	@rm -Rf $(OBJ_PATH)
	@make clean -C ./libft/
	@make clean -C ./minilibx/

fclean: clean
	@rm -fv $(NAME)
	@make fclean -C ./libft/

re: fclean all
