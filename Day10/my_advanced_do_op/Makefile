##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC     =	src/main.c 		\
			src/get_args.c 	\
			src/op.c 		\
			src/usage.c 	\
			src/do_op.c 	\


OBJ	    =	$(SRC:.c=.o)

CFLAGS  =	-Wall -Wextra

CPPFLAGS	=	-I./include -I./../include

LDFLAGS     = -L./../lib -lmy_string -lmy_printf

NAME	=	my_advanced_do_op

CC	=	gcc

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

debug:	CFLAGS += -g3
debug:	re

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

tests_run: SRC += ../tests/tests_do_op.c
tests_run: SRC := $(filter-out src/main.c, $(SRC))
tests_run: NAME := unit_tests
tests_run:
	$(CC) -o $(NAME) $(SRC) $(LDFLAGS) -lcriterion --coverage $(CPPFLAGS) $(LDFLAGS)
	./$(NAME)

.PHONY: all clean fclean test_run re