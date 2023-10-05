/*
** my_showstr.c for my_showstr in /home/laplan_m//exo/piscine/Jour_07
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Oct 13 20:28:42 2010 melvin laplanche
** Last update Thu Nov  4 16:40:10 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

void	ascii_hexa_converter(char c);

int	my_showstr(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] >= ' ' && str[i] <= '~')
	xwrite(1, &str[i], 1);
      else
	{
	  xwrite(1, "\\", 1);
	  ascii_hexa_converter(str[i]);
	}
    }
  return (0);
}

void	ascii_hexa_converter(char c)
{
  char	str[6];
  char	tmp;

  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = 'd';
  str[4] = 'e';
  str[5] = 'f';
  tmp = c / 16 + '0';
  xwrite(1, &tmp, 1);
  tmp = c % 16;
  if (tmp < 10)
    tmp += '0';
  else
    tmp = str[tmp - 10];
  xwrite(1, &tmp, 1);

}
