/*
** my.h for tetri in /home/heroin/delivery/PSU/PSU_2016_tetris/include
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Mon Feb 27 14:24:08 2017 Heroin
** Last update Sun Mar 19 21:56:22 2017 Simon LEJEUNE
*/

#ifndef	MY_H
#define	MY_H

void	my_putstr(char *str);
int	check_width(int fd);
int	check_tetrimino();
int	is_it_tetri(char *name);
int	my_strlen(char *str);
char	*get_next_line(int fd);
char	*my_strcat(char *str1, char *str2);
void	help();
void	my_putchar(char);
int	my_strcmp(char*, char*);
char	*my_strcpy(char*);

#endif
