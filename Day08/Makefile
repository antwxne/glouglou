##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC		=	my_strdup.c		\
			concat_params.c		\
			my_show_word_array.c	\

TEST_NAME 	=	unit_tests

tests_run:
	gcc -o $(TEST_NAME) $(SRC) tests/*.c -lcriterion --coverage
	./unit_tests
.PHONY: tests_run