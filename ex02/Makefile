name  = template

src = main.cpp  
head =   Array.hpp Array.tpp
obj = $(src:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
.o : .cpp $(head)
	$(CC) $< -c -o $@

all:$(name)

$(name) : $(obj)
	$(CC) $(obj) -o $(name)

clean :
	rm -rf $(obj)
fclean : clean
	rm -rf $(name)
re : fclean all