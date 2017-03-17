/*
** help.c for tetris in /Users/simonlejeune/Unix_System_Prog/Sem2/PSU_2016_tetris/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Fri Mar 17 11:50:15 2017 Simon LEJEUNE
** Last update Fri Mar 17 14:12:20 2017 Simon LEJEUNE
*/

#include "my.h"

void	help()
{
  my_putstr("Usage:\t./tetris [options]\n");
  my_putstr("Options:\n");
  my_putstr("\t--help");
  my_putstr("\t-l --level={num}");
  my_putstr("\t-kl --key-left={K}");
  my_putstr("\t-kr --key-right={K}");
  my_putstr("\t-kt --key-turn={K}");
  my_putstr("\t-kd --key-drop={K}");
  my_putstr("\t-kq --key-quit={K}");
  my_putstr("\t-kp --key-pause={K}");
  my_putstr("\t--map-size={row,col}");
  my_putstr("\t-w --without-next");
  my_putstr("\t-d --debug");
}
