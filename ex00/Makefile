name  = template

src = main.cpp  
head =   Fn.hpp
obj = $(src:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98
.o :$(head) .cpp 
	$(CC) $< -c -o $@

all:$(name)

$(name) : $(obj)
	$(CC) $(obj) -o $(name)

clean :
	rm -rf $(obj)
fclean : clean
	rm -rf $(name)
re : fclean all