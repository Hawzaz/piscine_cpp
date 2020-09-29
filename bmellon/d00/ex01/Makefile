# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 17:08:51 by bmellon           #+#    #+#              #
#    Updated: 2020/09/28 17:09:54 by bmellon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= MyAwesomePhonebook

CC		= clang++

FLAGS	= -Wextra -Wall -Werror

SRC		= phonebook.cpp 

all		:	$(NAME)
			@echo "My Awesome Phonebook is ready"

$(NAME) = @$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean	: 
			@rm -f $(NAME)

re		: clean all