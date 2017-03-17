/*
** help.c for tetris in /Users/simonlejeune/Unix_System_Prog/Sem2/PSU_2016_tetris/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Fri Mar 17 11:50:15 2017 Simon LEJEUNE
** Last update Fri Mar 17 14:35:37 2017 Simon LEJEUNE
*/

#include "my.h"

void	help()
{
  my_putstr("Usage:\t./tetris [options]\n");
  my_putstr("Options:\n");
  my_putstr("   --help\t\tDisplay this help\n");
  my_putstr("   -l --level={num}\tStart Tetris at level num (def: 1)\n");
  my_putstr("   -kl --key-left={K}\tMove the tetrimino LEFT using the K key (def: left arrow)\n");
  my_putstr("   -kr --key-right={K}\tMove the tetrimino RIGHT using the K key (def: right arrow)\n");
  my_putstr("   -kt --key-turn={K}\tTURN the tetrimino clockwise 90d using the K key (def: top arrow)\n");
  my_putstr("   -kd --key-drop={K}\tDROP the tetrimino using the K key (def: down arrow)\n");
  my_putstr("   -kq --key-quit={K}\tQUIT the game using the K key (def: ’q’ key)\n");
  my_putstr("   -kp --key-pause={K}\tPAUSE/RESTART the game using the K key (def: space bar)\n");
  my_putstr("   --map-size={row,col}\tSet the numbers of rows and columns of the map (def: 20,10)\n");
  my_putstr("   -w --without-next\tHide next tetrimino (def: false)\n");
  my_putstr("   -d --debug\t\tDebug mode (def: false)\n");
}
