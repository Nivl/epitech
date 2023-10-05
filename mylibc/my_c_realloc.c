/*
** my_c_realloc.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec  6 22:29:34 2010 melvin laplanche
** Last update Tue Dec  7 23:28:45 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char		*my_c_realloc(char   *str,
			      size_t new_size)
{
  char		*new_str;

  new_str = xmalloc(sizeof(*new_str) * new_size);
  my_cmemset(new_str, 0, new_size);
  my_strcat(new_str, str);
  free(str);
  return (new_str);
}
