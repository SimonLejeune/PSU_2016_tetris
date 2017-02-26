/*
** window.c for tetris in /Users/simonlejeune/Unix_System_Prog/Sem2/PSU_2016_tetris/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Tue Feb 21 16:36:10 2017 Simon LEJEUNE
** Last update Tue Feb 21 17:42:14 2017 Simon LEJEUNE
*/

#include <fcntl.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

char	*reading(char *map)
{
  int	fd;
  char	*buff;

  initscr();
  noecho();
  keypad(stdscr, TRUE);
  fd = open(map, O_RDONLY);
  buff = malloc(sizeof(char*) * 500);
  read(fd, buff, 500);
  printw(buff);
  refresh();
  return (buff);
}
