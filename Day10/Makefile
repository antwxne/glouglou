##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC 	= 	my_str_to_word_array.c		\
			my_sort_word_array.c 		\

NAME 	=	unit_tests

CPPFLAGS	=	-I./include

LDFLAGS		= 	-lcriterion --coverage -L./lib -lmy_printf -lmy_string

all:
	make -C ./lib/
	make -C ./do_op/

clean:
	make clean -C ./lib/
	make clean -C ./do_op/

fclean:
	make fclean -C ./lib/
	make fclean -C ./do_op/

tests_run:
	mr_clean
	make -C lib/
	make tests_run -C ./do_op/
	gcc -o $(NAME) $(SRC) tests/tests_day10.c $(CPPFLAGS) $(LDFLAGS)
	./unit_tests

.PHONY: all clean fclean tests_run