CC = gcc
CFLAGS = -Wall
SRC = main.c $(wildcard comandas/*.c) $(wildcard estoque/*.c) $(wildcard garcom/*.c) $(wildcard interfacesPrincipais/*.c) $(wildcard relatorio/*.c) $(wildcard validadores/*.c)
OBJ = $(SRC:.c=.o)
EXEC = main.exe

# Regra padrão: compilar o programa
all: $(EXEC)

# Regras para gerar o executável
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Regras para compilar os arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos gerados
clean:
	rm -f $(OBJ) $(EXEC)
