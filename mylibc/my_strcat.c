/*
** my_strcat.c for my_strcat in
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Oct 12 11:34:18 2010 melvin laplanche
** Last update Tue Dec 21 00:20:58 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strcat(char *dest,
		   const char *src)
{
  int	i;
  int	start;

  start = my_strlen(dest);
  i = -1;
  while (src[++i] != '\0')
    dest[start + i] = src[i];
  dest[start + i] = '\0';
  return (dest);
}
