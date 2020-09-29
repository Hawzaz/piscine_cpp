all:
	clang++ -Wall -Werror -Wextra -c *.cpp -I ./*.hpp
	clang++ -fsanitize=address -o RelevantName *.o

clean:
	rm -f *.o
	rm -f *.gch
	rm -f RelevantName

fclean: clean
	rm -f ./RelevantName

re: fclean all

