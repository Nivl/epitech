/*
** my_str_isprintable.c for my_str_isprintable in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 18:15:03 2010 melvin laplanche
** Last update Wed Nov  3 23:44:02 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_str_isprintable(const char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (!(str[i] >= ' ' && str[i] <= '~'))
	return (0);
    }
  return (1);
}
