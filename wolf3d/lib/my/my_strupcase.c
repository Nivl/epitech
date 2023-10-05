/*
** my_strupcase.c for my_strupcase in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 15:40:21 2010 melvin laplanche
** Last update Sun Oct 24 18:35:01 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strupcase(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
    }
  return (str);
}
