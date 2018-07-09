# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/26 01:38:20 by cshi              #+#    #+#              #
#    Updated: 2016/07/28 22:49:05 by cshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
INCLUDES = ft.h
SRCS = ft_display_file.c
CFLAGS = -Wall -Wextra -Werror
COPTION = -o $(NAME) -I $(INCLUDES)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(COPTION) $(SRCS)

clean:

fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
