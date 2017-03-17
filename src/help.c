/*
** help.c for tetris in /Users/simonlejeune/Unix_System_Prog/Sem2/PSU_2016_tetris/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Fri Mar 17 11:50:15 2017 Simon LEJEUNE
** Last update Fri Mar 17 14:20:41 2017 Simon LEJEUNE
*/

#include "my.h"

void	help()
{
  my_putstr("Usage:\t./tetris [options]\n");
  my_putstr("Options:\n");
  my_putstr("   --help\n");
  my_putstr("   -l --level={num}\n");
  my_putstr("   -kl --key-left={K}\n");
  my_putstr("   -kr --key-right={K}\n");
  my_putstr("   -kt --key-turn={K}\n");
  my_putstr("   -kd --key-drop={K}\n");
  my_putstr("   -kq --key-quit={K}\n");
  my_putstr("   -kp --key-pause={K}\n");
  my_putstr("   --map-size={row,col}\n");
  my_putstr("   -w --without-next\n");
  my_putstr("   -d --debug\n");
}
