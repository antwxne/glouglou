##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC		=	my_putchar.c		\
			my_print_alpha.c	\
			my_print_revalpha.c	\
			my_print_digits.c 	\
			my_isneg.c			\
			my_put_nbr.c 		\

TEST_NAME 	=	unit_tests

tests_run:
	gcc -o $(TEST_NAME) $(SRC) tests/*.c -lcriterion --coverage
	./unit_tests
.PHONY: tests_run