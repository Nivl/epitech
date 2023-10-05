/*
** my_strndup.c for libmy in /home/laplan_m//Src/Epitech/Projets/Bistro
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Oct 31 16:47:13 2010 melvin laplanche
** Last update Wed Nov 10 21:16:07 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char		*my_strndup(const char   *str,
			    size_t       size)
{
  char		*new_str;
  size_t	i;

  new_str = xmalloc(size * sizeof(*new_str));
  i = -1;
  while (str[++i] != '\0' && i < size - 1)
    new_str[i] = str[i];
  new_str[i] = '\0';
  return (new_str);
}
