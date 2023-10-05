/*
** my_str_isalpha.c for my_str_isalpha in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 17:35:35 2010 melvin laplanche
** Last update Wed Nov  3 23:41:53 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_str_isalpha(const char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (!((str[i] >= '0' && str[i] <= '9') ||
	    (str[i] >= 'a' && str[i] <= 'z') ||
	    (str[i] >= 'A' && str[i] <= 'Z')))
	return (0);
    }
  return (1);
}
