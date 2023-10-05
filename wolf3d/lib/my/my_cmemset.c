/*
** my_memset.c for libmy in /home/laplan_m//afs/public/Projets/Bistro
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Oct 26 14:28:54 2010 melvin laplanche
** Last update Wed Nov 10 21:16:33 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char		*my_cmemset(char  *s,
			    int    c,
			    size_t n)
{
  size_t	i;

  i = -1;
  while (++i < n)
    *(s + i) = c;
  return (s);
}

