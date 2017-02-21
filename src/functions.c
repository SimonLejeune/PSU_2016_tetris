/*
** functions.c for tetris in /Users/simonlejeune/Documents/Epitech/PSU_2016_tetris/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Tue Feb 21 13:50:40 2017 Simon LEJEUNE
** Last update Tue Feb 21 13:54:08 2017 Simon LEJEUNE
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
