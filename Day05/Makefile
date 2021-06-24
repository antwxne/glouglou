##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC		=	my_putchar.c		\
			my_compute_factorial_it.c	\
			my_compute_factorial_rec.c	\
			my_compute_power_it.c		\
			my_compute_power_rec.c		\
			my_compute_square_root.c	\
			my_is_prime.c			\
			my_find_prime_sup.c		\

TEST_NAME 	=	unit_tests

tests_run:
	gcc -o $(TEST_NAME) $(SRC) tests/*.c -lcriterion --coverage
	./unit_tests
.PHONY: tests_run