all:
	clang++ -Wall -Werror -Wextra -c *.cpp -I ./*.hpp
	clang++ -fsanitize=address -o replace *.o

clean:
	rm -f *.o
	rm -f *.gch
	rm -f replace

fclean: clean
	rm -f ./replace

re: fclean all

