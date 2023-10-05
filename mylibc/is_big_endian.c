/*
** is_big_endian.c for Jour 9 in /home/laplan_m//exo/piscine/Jour_09
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Oct 17 23:13:12 2010 melvin laplanche
** Last update Wed Dec  1 01:49:40 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	is_big_endian(void)
{
  int	i;

  i = 1;
  return (*(char*)&i == 0 || sizeof(void*) == 8);
}
