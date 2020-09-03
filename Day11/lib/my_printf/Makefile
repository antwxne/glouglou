##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	bis_disp.c 			\
		my_printf.c 		\
		my_putnbr.c 		\
		my_strlen.c 		\
		my_putchar.c		\
		my_putstr.c 		\
		my_revstr.c 		\
		number_base.c 		\
		sum_stdarg.c 		\
		my_putstr_error.c 	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy_printf.a

INCLUDE_NAME	=	my_printf.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(INCLUDE_NAME) ../../include/

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re:	fclean all

debug:	CPPFLAGS += -g3
debug:	re

.PHONY: all fclean re clean $(NAME) debug