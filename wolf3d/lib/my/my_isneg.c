/*
** my_isneg.c for my_isneg in /afs/epitech.net/users/all/laplan_m/rendu/piscine/Jour_03
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Oct  6 10:54:31 2010 melvin laplanche
** Last update Sun Oct 24 18:31:40 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_isneg(int n)
{
  my_putchar((n < 0 ? 'N' : 'P'));
  return (EXIT_SUCCESS);
}
