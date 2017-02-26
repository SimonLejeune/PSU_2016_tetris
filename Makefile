##
## Makefile for tetris in /Users/simonlejeune/Unix_System_Prog/Sem2/PSU_2016_tetris/
##
## Made by Simon LEJEUNE
## Login   <simon.lejeune@epitech.eu>
##
## Started on  Tue Feb 21 15:29:27 2017 Simon LEJEUNE
## Last update Tue Feb 21 16:36:06 2017 Simon LEJEUNE
##

SRC	=	src/main.c \
	src/functions.c \
	src/help.c \
	src/window.c

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
