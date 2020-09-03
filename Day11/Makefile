##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC     =	my_prarams_to_list.c	\
			my_list_size.c 			\


OBJ	    =	$(SRC:.c=.o)

CFLAGS  =	-Wall -Wextra

CPPFLAGS	=	-I./include -I./../include

LDFLAGS     = -L./lib -lmy_string -lmy_printf

NAME	= a.out

CC	=	gcc

all:
	make -C ./lib/
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

tests_run: SRC += tests/tests_day11.c
tests_run: SRC := $(filter-out src/main.c, $(SRC))
tests_run: NAME := unit_tests
tests_run:
	make -C ./lib/
	$(RM) *.gcda *.gcno
	$(CC) -o $(NAME) $(SRC) $(LDFLAGS) -lcriterion --coverage $(CPPFLAGS) $(LDFLAGS)
	./$(NAME)

.PHONY: all clean fclean test_run re