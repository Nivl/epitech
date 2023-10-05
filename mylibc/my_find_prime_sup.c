/*
** my_find_prime_sup.c for my_find_prime_sup in /home/laplan_m//exo/piscine/Jour_05
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 23:09:52 2010 melvin laplanche
** Last update Sun Oct 24 18:35:09 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_find_prime_sup(int nb)
{
  while (1)
    {
      if (my_is_prime(nb++))
	return (nb - 1);
    }
}
