##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	my_split.c 				\
		my_str_c_copy.c 		\
		my_strcat.c 			\
		my_strcmp.c 			\
		my_strcpy.c 			\
		my_strdup.c  			\
		my_strlen.c 			\
		my_strlenc.c 			\
		my_strncat.c 			\
		my_revstr.c 			\
		my_clean_str.c 			\
		my_strncmp.c 			\
		my_str_is_num.c 		\
		my_str_is_letter.c 		\
		my_str_is_positiv.c 	\
		my_getnbr.c 			\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy_string.a

INCLUDE_NAME	=	my_string.h

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
