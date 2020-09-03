##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

all:
	make -C my_printf/
	make -C my_string/
	make -C my_free/

clean:
	make clean -C my_printf/
	make clean -C my_string/
	make clean -C my_free/

fclean:	clean
	make fclean -C my_printf/
	make fclean -C my_string/
	make fclean -C my_free/

re: fclean all

debug:
	make debug -C my_printf/
	make debug -C my_string/
	make debug -C my_free/

.PHONY: all fclean re clean debug
