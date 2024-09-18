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

# Target to build the static library
all: $(LIBFT) $(NAME)

# Build libft if it's not already built
$(LIBFT):
	make -C $(LIBFT_DIR)

# Build libftprintf.a and include libft object files
$(NAME): $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

# Compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and temporary files
clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)

# Remove all generated files including static libraries
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

# Rebuild the library
re: fclean all

.PHONY: all clean fclean re

