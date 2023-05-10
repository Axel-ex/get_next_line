NAME = get_next_line

SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

GREEN = \033[38;5;47m
YELLOW = \033[38;5;226m
RED =  \033[38;5;196m
RESET = \033[0m

%.o : %.c
	cc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	echo "$(GREEN)$(NAME) was created$(RESET)"

all : $(NAME)

clean: 
	rm -rf $(OBJ)
	echo "$(YELLOW) all the objects were removed $(RESET)"

fclean: clean
	rm -rf $(NAME)
	echo "$(RED)$(NAME) was removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re

