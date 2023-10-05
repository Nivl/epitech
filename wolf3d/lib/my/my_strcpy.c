/*
** my_strcpy.c for my_strcpy.c in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 09:48:40 2010 melvin laplanche
** Last update Sat Dec 18 21:48:21 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strcpy(char		*dest,
		   const char	*src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}

