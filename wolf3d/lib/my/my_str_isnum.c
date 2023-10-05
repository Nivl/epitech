/*
** my_str_isnum.c for my_str_isnum in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 17:46:58 2010 melvin laplanche
** Last update Wed Nov  3 23:42:11 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_str_isnum(const char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (0);
    }
  return (1);
}
