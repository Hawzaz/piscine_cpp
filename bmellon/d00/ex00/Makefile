# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:41:58 by bmellon           #+#    #+#              #
#    Updated: 2020/09/28 17:08:04 by bmellon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= clang++

FLAGS	= -Wextra -Wall -Werror

SRC		= megaphone.cpp

all		:	$(NAME)
			@echo "Megaphone commpiled"

$(NAME) = @$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean	: 
			@rm -f $(NAME)

re		: clean all