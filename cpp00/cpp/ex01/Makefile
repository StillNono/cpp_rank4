# Define o nome do executável
NAME = phonebook

# Define o nome do arquivo fonte
SRC = phonebook.cpp contact.cpp main.cpp

# Define o compilador
CC = g++

# Define as flags de compilação
CFLAGS = -Wall -Werror -std=c++98 # Usando -std=c++98 para ser compatível com as 42 School, se for o caso

# Regra principal (a que é chamada quando você digita 'make')
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

# Regra para limpar os arquivos gerados
clean:
	rm -f $(NAME)
