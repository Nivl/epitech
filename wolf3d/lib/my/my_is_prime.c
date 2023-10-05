/*
** my_is_prime.c for my_is_prime in /home/laplan_m//exo/piscine/Jour_05
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 22:58:33 2010 melvin laplanche
** Last update Sun Oct 24 18:35:08 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_is_prime(int nombre)
{
  int	i;

  if (nombre < 2)
    return (0);
  else
    {
      if (nombre == 2)
	return (1);
      if (nombre % 2 == 0)
	return (0);
      i = 3;
      while (i < nombre)
	{
	  if (nombre % i == 0)
	    return (0);
	  i = i + 2;
	}
    }
  return (1);
}
