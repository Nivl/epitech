/*
** my_square_root.c for my_square_root in /home/laplan_m//exo/piscine/Jour_05
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 20:42:04 2010 melvin laplanche
** Last update Sun Oct 24 18:35:05 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int    	my_square_root(int nb)
{
  int  	i;

  i = 1;
  while (i * i <= nb)
    {
      if (i * i == nb)
	return (i);
      i++;
    }
  return (0);
}

