# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 11:08:02 by jhobus-v          #+#    #+#              #
#    Updated: 2024/09/18 16:14:59 by jhobus-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define variables
NAME = libftprintf.a
LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft
SOURCE = ft_printf.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SOURCE:.c=.o)
LIBFT_OBJ = $(shell find $(LIBFT_DIR) -name "*.o")

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re

