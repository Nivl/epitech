/*
** my_strncat.c for my_strncat in /home/laplan_m//exo/piscine/Jour_07
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Oct 12 13:56:55 2010 melvin laplanche
** Last update Wed Nov  3 23:42:58 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strncat(char *dest,
		    const char *src,
		    int n)
{
  int	i;
  int	start;

  start = my_strlen(dest);
  i = -1;
  while (++i < n)
    dest[start + i] = src[i];
  dest[start + i] = '\0';
  return (dest);
}
