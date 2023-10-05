/*
** my_strlowcase.c for my_strlowcase in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 16:02:24 2010 melvin laplanche
** Last update Sun Oct 24 18:35:02 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strlowcase(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
    }
  return (str);
}

