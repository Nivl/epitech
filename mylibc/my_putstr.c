/*
** my_putstr.c for my_putstr in /home/laplan_m//afs
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct  7 09:31:01 2010 melvin laplanche
** Last update Wed Dec 15 22:22:25 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

int	my_putstr(const char *str)
{
  xwrite(1, str, my_strlen(str));
  return (EXIT_SUCCESS);
}
