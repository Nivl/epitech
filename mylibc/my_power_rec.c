/*
** my_power_rec.c for my_power_rec in /home/laplan_m//afs/Jour05
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Oct  8 12:56:31 2010 melvin laplanche
** Last update Sun Oct 24 18:35:07 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_power_rec(int nb,
		     int power)
{
  if (power < 0)
    return (0);
  else if (power == 0)
    return (1);
  return (nb * my_power_rec(nb, power - 1));
}
