/*
** my_imemset.c for lib_my in /home/laplan_m/Src/Epitech/Projets/math/101jacobi
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 23 22:14:26 2010 melvin laplanche
** Last update Tue Nov 23 22:15:55 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int		*my_imemset(int   *tab,
			    int    x,
			    size_t n)
{
  size_t	i;

  i = -1;
  while (++i < n)
    tab[i] = x;
  return (tab);
}

