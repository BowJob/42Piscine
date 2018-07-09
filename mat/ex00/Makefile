# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 07:54:46 by cshi              #+#    #+#              #
#    Updated: 2016/07/31 07:54:50 by cshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
CC = gcc
INCLUDES = ft.h
SRCS = ft_atoi.c main.c eval_expr.c ft_numchk.c ft_genfn.c
CFLAGS = -Wall -Wextra -Werror
COPTION = -o $(NAME) -I $(INCLUDES)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(COPTION) $(SRCS)

clean:
	/bin/rm -f ft.h.gch
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
