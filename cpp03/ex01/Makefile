NAME = ScavTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

CC = g++

CFLAGS = -Wall -Werror -std=c++98 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)