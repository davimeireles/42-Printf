NAME = libftprintf.a
CCW = gcc -Wall -Wextra -Werror
OBJ_FILES = *.o
SRC_FILES = ft_printf.c ft_print_char.c ft_print_str.c ft_print_nbr.c ft_print_hex.c

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_FILES): $(SRC_FILES)
	$(CCW) -c $(SRC_FILES)

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
