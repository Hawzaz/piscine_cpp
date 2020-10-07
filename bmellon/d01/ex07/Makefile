# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/07 14:16:51 by bmellon           #+#    #+#              #
#    Updated: 2020/10/07 16:50:26 by bmellon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace

CC		= clang++

FLAGS	= -Wextra -Wall -Werror

SRC		= main.cpp Sed.cpp

all		:
			$(CC) $(FLAGS) $(SRC)
			mv a.out $(NAME)

clean	: 
			@rm -f $(NAME)

re		: clean all

.PHONY	:	all, clean, fclean, re

.SILENT: