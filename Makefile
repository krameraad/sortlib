NAME = sortlib.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SORTS = $(wildcard sorts/*.c)
UTILS = $(wildcard utils/*.c)
OBJ = $(SORTS:.c=.o)

# Commands --------------------------------------------------------------------

lib: $(NAME)

test: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: lib test clean fclean re

# Files -----------------------------------------------------------------------

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $^