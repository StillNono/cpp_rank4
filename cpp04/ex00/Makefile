NAME = ANIMAL

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp

CC = g++

CFLAGS = -Wall -Werror -std=c++98 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)