/*
** my_strlcat.c for my_strlcat in /home/laplan_m//exo/piscine/Jour_07
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Oct 12 14:13:05 2010 melvin laplanche
** Last update Thu Nov  4 16:55:47 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char		*my_strlcat(char *dest,
			    const char *src,
			    size_t l)
{
  size_t	i;
  int		start;

  start = my_strlen(dest);
  i = -1;
  while (++i < my_strlen(src) && start + i < l)
    dest[start + i] = src[i];
  dest[start + i] = '\0';
  return (dest);
}
