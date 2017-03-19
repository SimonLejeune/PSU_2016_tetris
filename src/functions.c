/*
** functions.c for tetris in /home/heroin/delivery/PSU/PSU_2016_tetris/src
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Mon Feb 27 13:30:09 2017 Heroin
** Last update Sun Mar 19 21:04:16 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include "../include/my.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      write(1, &str[i], 1);
      i++;
    }
}
