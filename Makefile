##
## Makefile for hhh in /home/heroin/delivery/PSU/PSU_2016_tetris
## 
## Made by Heroin
## Login   <victor.herouin@epitech.eu>
## 
## Started on  Tue Feb 21 09:40:24 2017 Heroin
## Last update Sun Mar 19 20:05:50 2017 Simon LEJEUNE
##
SRC		=	src/main.c		\
			src/functions.c		\
			src/check_tetriminos.c	\
			src/help.c

OBJ		=	$(SRC:.c=.o)

CFLAGS		=	-g -I ./include

NAME		=	tetris

all		:	$(OBJ)
			gcc -o $(NAME) $(OBJ) -lncurses -L. -lgnl

clean		:
			rm -f $(OBJ)

fclean		:	clean
			rm -f $(NAME)

re		:	fclean all
