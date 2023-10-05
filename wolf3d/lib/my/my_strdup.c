/*
** my_strdup.c for my_strdup in /home/laplan_m//exo/piscine/Jour_08
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Oct 13 09:49:38 2010 melvin laplanche
** Last update Fri Nov 19 21:03:25 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char	*my_strdup(const char *str)
{
  char	*new_str;
  int	i;

  new_str = xmalloc((my_strlen(str) + 1) * sizeof(*new_str));
  i = -1;
  while (str[++i] != '\0')
    new_str[i] = str[i];
  new_str[i] = '\0';
  return (new_str);
}
