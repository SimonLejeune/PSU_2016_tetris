/*
** strcmp.c for strcmp in /home/Heroin/delivery/PSU/PSU_2016_minishell1/src
** 
** Made by Victor Herouin
** Login   <Heroin@epitech.net>
** 
** Started on  Tue Jan 17 15:19:23 2017 Victor Herouin
** Last update Mon Mar 13 17:36:29 2017 Heroin
*/
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

char    *strcat(char *str1, char *str2)
{
  int   i;
  int   j;
  char *str;

  i = 0;
  j = 0;
  str = malloc(sizeof(char)  * ((my_strlen(str1)) + (my_strlen(str2))));
  while(str1[i] != '\0')
    {
      if(str1[i] != '\n')
        str[i] = str1[i];
      i++;
    }
  while(str2[j] != '\0')
    {
      if(str2[j] != '\n')
        str[i] = str2[j];
      j++;
      i++;
    }
  free(str1);
  return(str);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while(str[i] != '\0')
    i++;
  return(i);
}
int	strcmp(char *str1, char *str2)
{
  int	i;
  int	err;

  i = 0;
  err = 0;
  if((my_strlen(str1)) == (my_strlen(str2)))
    while(str1[i] != '\0')
      {
	if(str1[i] != str2[i])
	  err++;
	i++;
      }
  else
    err++;
  return(err);
}

int	find(char *str1, char *str2)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while(str1[i] != '\0')
    {
      if(str1[i] == str2[i])
	cpt++;
      i++;
    }
  return(cpt);
}

char	*mstrcpy(char *str1)
{
  int	i;
  int	j;
  char	*s;

  s = malloc(sizeof(char) * (my_strlen(str1)));
  while(str1[i] != '\0')
    {
      s[i] = str1[i];
      i++;
    }
  return(s);
}
