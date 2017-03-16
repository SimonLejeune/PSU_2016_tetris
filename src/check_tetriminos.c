/*
** check_tetriminos.c for tetris in /home/heroin/delivery/PSU/PSU_2016_tetris/src
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Mon Feb 27 16:03:34 2017 Heroin
** Last update Thu Mar 16 15:40:44 2017 Heroin
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int	check_width(int fd)
{
  int	a;
  int	cnt;
  char	*str;
  char	*width;

  a = 0;
  str = malloc(sizeof(char) * 20);
  str = get_next_line(fd);
  width = malloc(sizeof(char) * 10);
  printf("str = %s\n", str);
  while (str[a] != ' ')
    {
      width[a] = str[a];
      a++;
    }
}

char    *str_cat(char *str1, char *str2)
{
  int   i;
  int   j;
  char *str;

  i = 0;
  j = 0;
  str = malloc(sizeof(char)  * ((my_strlen(str1)) + (my_strlen(str2)) + 1));
  while (str1[i] != '\0')
    {
      str[i] = str1[i];
      i++;
    }
  while (str2[j] != '\0')
    {
      str[i] = str2[j];
      j++;
      i++;
    }
  return(str);
}

int	check_tetrimino()
{
  DIR	*dir;
  struct dirent	*sdir;
  char *path;
  int	fd;

  dir = opendir("tetrimino/");
  if (dir == NULL)
    return(84);
  while ((sdir = readdir(dir)) != NULL)
    {
      if (sdir->d_name[0] != '.')
	path = str_cat("tetrimino/", sdir->d_name);
      if ((fd = open(path, O_RDONLY)) != -1)
	{
	  printf("sname = %s\n", path);
	  check_width(fd);
	}
    }
}
