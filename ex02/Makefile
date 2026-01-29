NAME = convert

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC =  Base.cpp main.cpp

SRC_H =	Base.hpp A.hpp B.hpp C.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(SRC_H)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all