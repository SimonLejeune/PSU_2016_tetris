##
## Makefile for hhh in /home/heroin/delivery/PSU/PSU_2016_tetris
## 
## Made by Heroin
## Login   <victor.herouin@epitech.eu>
## 
## Started on  Tue Feb 21 09:40:24 2017 Heroin
## Last update Mon Mar  6 16:54:44 2017 Heroin
##
SRC		=	src/main.c		\
			src/functions.c		\
			src/check_tetriminos.c	\

OBJ		=	$(SRC:.c=.o)

NAME		=	tetris

all		:	$(OBJ)
			gcc -o $(NAME) $(OBJ) -lncurses -L. -lgnl

clean		:
			rm $(OBJ)

fclean		:	clean
			rm $(NAME)

re		:	fclean all
