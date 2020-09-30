# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 17:08:51 by bmellon           #+#    #+#              #
#    Updated: 2020/09/30 15:12:09 by bmellon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= MyAwesomePhonebook

CC		= clang++

FLAGS	= -Wextra -Wall -Werror

SRC		= MyAwesomePhoneBook.cpp Contact.class.cpp

all		:	
			$(CC) $(FLAGS) $(SRC) *.hpp
			mv a.out MyAwesomePhoneBook

clean	: 
			@rm -f $(NAME)

re		: clean all

.PHONY	:	all, clean, fclean, re

.SILENT: