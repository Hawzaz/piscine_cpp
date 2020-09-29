NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

re : clean all

clean :
	@rm PhoneBook
	@echo "PhoneBook clear"

$(NAME) :
	@clang++ PhoneBook.cpp Contact.Class.cpp Contact.Class.hpp $(FLAGS)
	@mv a.out PhoneBook
	@echo "PhoneBook created"