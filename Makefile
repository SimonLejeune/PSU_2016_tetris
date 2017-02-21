##
## Makefile for tetris in /Users/simonlejeune/Documents/Epitech/PSU_2016_tetris/
##
## Made by Simon LEJEUNE
## Login   <simon.lejeune@epitech.eu>
##
## Started on  Tue Feb 21 13:07:44 2017 Simon LEJEUNE
## Last update Tue Feb 21 13:54:24 2017 Simon LEJEUNE
##

SRC	=	src/main.c \
	src/functions.c \
	src/help.c

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	gcc $(OBJ) -o $(NAME) -lncurses -Wall

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re : fclean all
