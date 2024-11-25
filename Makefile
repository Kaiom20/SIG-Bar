# Makefile

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -pedantic

# Source files
SRCS := main.c comandas/comandas.c comandas/ler_comandas.c estoque/estoque.c estoque/moduloE.c garcom/garcom.c garcom/moduloG.c relatorio/relatorio.c validadores/valida.c garcom/ler_garcom.c estoque/ler_estoque.c interfacesPrincipais/interfaces.c comandas/moduloC.c relatorio/moduloR.c

# Object files
OBJS := $(SRCS:.c=.o)

# Header files
HDRS := comandas/comandas.h comandas/ler_comandas.h estoque/estoque.h estoque/moduloE.h garcom/garcom.h garcom/moduloG.h relatorio/relatorio.h validadores/valida.h garcom/ler_garcom.h estoque/ler_estoque.h interfacesPrincipais/interfaces.h comandas/moduloC.h relatorio/moduloR.h

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