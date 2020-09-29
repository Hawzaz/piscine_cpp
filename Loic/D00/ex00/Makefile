NAME = megaphone

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

re : clean all

clean :
	@rm megaphone
	@echo "Megaphone clear"

$(NAME) :
	@clang++ megaphone.cpp $(FLAGS) -o megaphone
	@echo "Megaphone created"
