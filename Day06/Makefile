##
## EPITECH PROJECT, 2020
## Day03
## File description:
## Makefile
##

SRC		=	my_strcpy.c			\
			my_strncpy.c		\
			my_revstr.c			\
			my_strstr.c		\
			my_strcmp.c 	\
			my_strncmp.c	\
			my_strupcase.c	\
			my_strlowcase.c	\
			my_strcapitalize.c	\
			my_str_isalpha.c	\
			my_str_isnum.c		\
			my_str_islower.c	\

TEST_NAME 	=	unit_tests

test_run:
	mr_clean
	gcc -o $(TEST_NAME) $(SRC) tests/*.c -lcriterion --coverage