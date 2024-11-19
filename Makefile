# Makefile

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -pedantic

# Source files
SRCS := main.c comandas.c estoque.c garcom/garcom.c relatorio.c validadores/valida.c garcom/ler_garcom.c ler_estoque.c interfacesPrincipais/interfaces.c

# Object files
OBJS := $(SRCS:.c=.o)

# Header files
HDRS := comandas.h estoque.h garcom/garcom.h relatorio.h validadores/valida.h garcom/ler_garcom.h ler_estoque.h interfacesPrincipais/interfaces.h

# Executable name
TARGET := main

# Windows-specific settings
ifeq ($(OS),Windows_NT)
    RM := del /Q
    TARGET := $(TARGET).exe
else
    RM := rm -f
endif

# Default target
all: $(TARGET)

# Compile object files
%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Run the executable
run: $(TARGET)
	./$(TARGET)

# Clean up object files and executable
clean:
	$(RM) $(OBJS) $(TARGET)

# Reference: https://github.com/Lleusxam/c-recipes/blob/main/makefile