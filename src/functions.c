/*
** functions.c for tetris in /home/heroin/delivery/PSU/PSU_2016_tetris/src
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Mon Feb 27 13:30:09 2017 Heroin
** Last update Wed Mar  8 15:09:27 2017 Heroin
*/
#include "../include/my.h"

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
