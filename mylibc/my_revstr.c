/*
** my_revstr.h for my_revstr in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 10:35:37 2010 melvin laplanche
** Last update Sun Oct 24 18:35:07 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	*my_revstr(char *str)
{
  int	i;
  int	len;
  char	c;

  i = 0;
  len = my_strlen(str) - 1;
  while (i <= len / 2)
    {
      c = str[i];
      str[i] = str[len - i];
      str[len - i] = c;
      i = i + 1;
    }
  return (str);
}
