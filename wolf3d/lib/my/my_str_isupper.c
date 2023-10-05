/*
** my_str_isupper.c for my_str_is_lower in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 17:51:33 2010 melvin laplanche
** Last update Wed Nov  3 23:43:40 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_str_isupper(const char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (!(str[i] >= 'A' && str[i] <= 'Z'))
	return (0);
    }
  return (1);
}
