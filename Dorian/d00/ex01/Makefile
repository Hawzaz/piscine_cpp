all:
	clang++ -Wall -Werror -Wextra -c *.cpp *.hpp
	clang++ -fsanitize=address -o RelevantName *.o

clean:
	rm -f RelevantName

