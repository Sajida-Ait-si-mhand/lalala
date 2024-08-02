#Command:
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#Files:
SRC = fill_stack_a.c push_swap.c split.c function.c
OBJ = ${SRC:.c=.o}

#library:
NAME = push_swap

all: $(NAME)

$(NAME) : $(OBJ)
	cc $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.SILENT: