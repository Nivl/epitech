/*
** my_nblen.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 12 17:01:01 2010 melvin laplanche
** Last update Sun Dec 12 17:14:50 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

size_t		my_nblen(int	nb)
{
  size_t	i;

  i = 0;
  if (nb < 0)
  {
    ++i;
    nb = -nb;
  }
  while ((nb = nb / 10))
    ++i;
  return (++i);
}
