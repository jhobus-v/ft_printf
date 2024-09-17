# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 11:08:02 by jhobus-v          #+#    #+#              #
#    Updated: 2024/09/16 14:52:30 by jhobus-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCE = ft_printf.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

OBJ = $(SOURCE:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT): 
	make -C ./libft

$(NAME): $(OBJ) $(LIBFT)
	ar rs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make clean -C ./libft

fclean: clean
	rm -f $(NAME)
	make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
