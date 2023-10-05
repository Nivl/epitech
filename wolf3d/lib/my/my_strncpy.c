/*
** my_strncpy.c for my_strncpy in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 11:13:03 2010 melvin laplanche
** Last update Sat Dec 18 21:53:29 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strncpy(char *dest,
		    const char *src,
		    int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
