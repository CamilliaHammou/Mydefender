##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

NAME = my_defender

SRC = src/*/*.c

all:
	gcc -g3 -o $(NAME) $(SRC) -L./include -I./include -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

clean:
	rm -f *~ | rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
