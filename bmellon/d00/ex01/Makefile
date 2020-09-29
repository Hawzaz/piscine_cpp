# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 17:08:51 by bmellon           #+#    #+#              #
#    Updated: 2020/09/29 21:07:16 by bmellon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= MyAwesomePhonebook

CC		= clang++

FLAGS	= -Wextra -Wall -Werror

SRC		= MyAwesomePhoneBook.cpp Contact.class.cpp

all		:	$(NAME)

%.o:%.c 
			$(CC) -o $@ $(FLAGS) -c $<

$(NAME) = @$(CC) -o $@ $(FLAGS) $(SRC) *.hpp

clean	: 
			@rm -f $(NAME)

re		: clean all

.PHONY	:	all, clean, fclean, re

.SILENT: