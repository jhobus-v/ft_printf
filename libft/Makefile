# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 10:57:51 by jhobus-v          #+#    #+#              #
#    Updated: 2024/08/28 16:15:51 by jhobus-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_bzero.c ft_puthexa.c ft_putnbr_u_fd.c ft_puthex_upper.c ft_isalnum.c ft_putstr.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_printptr.c ft_strlen.c ft_memmove.c ft_strlcpy.c ft_atoi.c ft_calloc.c ft_memchr.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_memcmp.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_split.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rs $(NAME) $(OBJ)  -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
