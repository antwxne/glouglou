##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC		=   my_str_to_word_array.c    \
            my_show_word_array.c        \
            my_params_to_array.c       \

TEST_NAME 	=	unit_tests

test_run:
	mr_clean
	make -C lib/
	gcc -o $(TEST_NAME) $(SRC) tests/*.c -lcriterion --coverage -I./include -L./lib -lmy_printf