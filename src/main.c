/*
** main.c for tetris in /Users/simonlejeune/Unix_System_Prog/Sem2/PSU_2016_tetris/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Tue Feb 21 15:29:06 2017 Simon LEJEUNE
** Last update Tue Feb 21 17:42:20 2017 Simon LEJEUNE
*/

#include <ncurses.h>
#include <string.h>

int main(int ac, char **av)
{
  int ch;
  char	*map;

  if (av[1][0] == '-' && av[1][1] == 'h')
    help();
  else
    {
      map = reading(av[1]);
    }
  endwin();
}
