##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	free_char_arr.c 	\
		free_double_arr.c 	\
		free_float_arr.c 	\
		free_int_arr.c 		\
		free_uint_arr.c 	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy_free.a

INCLUDE_NAME	=	my_free.h

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

re:	fclean all $(NAME) debug

debug:	CPPFLAGS += -g3
debug:	re

.PHONY: all fclean re clean $(NAME) debug