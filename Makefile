# -*- Makefile -*-

CC = cc
FLAGS = -Wall -Werror -Wextra

OBJ_DIC = obj
BIN_DIC = bin

SRCS = $(wildcard ./*.c)
OBJS = $(SRCS:./%.c=$(OBJ_DIC)/%.o)
TARGET = $(BIN_DIC)/libft

all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIC)
	$(CC) $(FLAGS) $(OBJS) -o $@

$(OBJ_DIC)/%.o: ./%.c | $(OBJ_DIC)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIC) $(BIN_DIC):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIC)

fclean:
	rm -rf $(OBJ_DIC) $(BIN_DIC)

re: fclean all

.PHONY: all clean fclean re