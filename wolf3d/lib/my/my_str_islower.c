/*
** my_str_islower.c for my_str_islower in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 17:49:16 2010 melvin laplanche
** Last update Wed Nov  3 23:43:47 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_str_islower(const char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (!(str[i] >= 'a' && str[i] <= 'z'))
	return (0);
    }
  return (1);
}
