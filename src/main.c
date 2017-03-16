/*
** main.c for isittetris? in /home/heroin/delivery/PSU/PSU_2016_tetris/src
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Tue Feb 21 09:46:18 2017 Heroin
** Last update Thu Mar 16 15:33:34 2017 Heroin
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <ncurses.h>
#include "../include/my.h"

void	debug_mode(int ac, char **av)
{
  my_putstr("*** DEBUG MODE ***\n");
  check_tetrimino();
}

int	is_a_dot(char *name)
{
  int	a;
  int	cnt;

  a = 0;
  cnt = 0;
  while (name[a] != '\0')
    {
      if (name[a] == '.')
	cnt++;
      a++;
    }
  if (cnt == 1)
    return (1);
  if (cnt == 0)
    return (0);
}

int	is_it_tetri(char *name)
{
  int	a;
  int	b;
  int	cnt;
  char	*tetri;

  a = 0;
  b = 0;
  cnt = 0;
  tetri = "tetrimino";
  if (is_a_dot(name) == 1)
    while(name[a] != '.')
      a++;
  if (is_a_dot(name) == 1)
    while (name[a] != '\0')
      {
	if (name[a] == tetri[b])
	  {
	    cnt++;
	    b++;
	  }
	a++;
      }
  if (cnt == 9)
    return (1);
  else
    return(0);
}

int	main(int ac, char **av)
{
  if (ac > 1)
    debug_mode(ac, av);  
}
