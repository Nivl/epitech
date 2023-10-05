/*
** xmalloc.c for xmalloc in /home/laplan_m//exo/piscine/Jour_08
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct 14 13:20:12 2010 melvin laplanche
** Last update Sun Dec 26 23:13:25 2010 melvin laplanche
*/

#include <stdlib.h>
#include "x.h"

void	*xmalloc(size_t size)
{
  void	*ptr;

  if ((ptr = malloc(size)) == NULL)
  {
    xwrite(2, "Cannot allocate memory\n", 23);
    exit(EXIT_FAILURE);
  }
  return (ptr);
}
