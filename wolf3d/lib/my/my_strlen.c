/*
** my_strlen.c for my_strlen in /home/laplan_m//afs
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct  7 09:51:48 2010 melvin laplanche
** Last update Fri Nov  5 00:46:52 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

size_t		my_strlen(const char *str)
{
  size_t	i;

  i = -1;
  while (*(str + ++i) != '\0');
  return (i);
}
