/*
** my_put_nbr.c for my_put_nbr in /afs/epitech.net/users/all/laplan_m/rendu/piscine/Jour_03
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Oct  6 14:50:54 2010 melvin laplanche
** Last update Mon Nov 15 21:45:05 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb / 10)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + '0');
}
