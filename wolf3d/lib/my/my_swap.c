/*
** my_swap.c for my_swap in /home/laplan_m//afs
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct  7 09:27:50 2010 melvin laplanche
** Last update Sun Oct 24 18:15:53 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
  return (EXIT_SUCCESS);
}
