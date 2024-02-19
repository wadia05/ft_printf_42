# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wait-bab <wait-bab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 10:53:42 by wait-bab          #+#    #+#              #
#    Updated: 2024/01/28 10:53:45 by wait-bab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_put_s.c ft_put_c.c ft_put_d.c ft_strlen.c ft_base.c ft_put_p.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

OBJ = $(SRC:.c=.o)

HEADER = libftprintf.h

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
