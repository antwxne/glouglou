##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC		=	my_putchar.c		\
			my_swap.c 			\
			my_putstr.c			\
			my_strlen.c			\
			my_evil_str.c		\
			my_getnbr.c			\
			my_sort_int_array.c	\

TEST_NAME 	=	unit_tests

tests_run:
	gcc -o $(TEST_NAME) $(SRC) tests/*.c -lcriterion --coverage
	./unit_tests
.PHONY: tests_run