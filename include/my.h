/*
** my.h for tetri in /home/heroin/delivery/PSU/PSU_2016_tetris/include
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Mon Feb 27 14:24:08 2017 Heroin
** Last update Mon Mar 13 17:45:31 2017 Heroin
*/
void	my_putstr(char *str);
int	check_width(int fd);
int     check_tetrimino();
int	is_it_tetri(char *name);
int	my_strlen(char *str);
char	*get_next_line(int fd);
char	*str_cat(char *str1, char *str2);
