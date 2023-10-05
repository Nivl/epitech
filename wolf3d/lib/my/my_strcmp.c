/*
** my_strcmp.c for my_strncmp in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 15:22:21 2010 melvin laplanche
** Last update Sat Dec 18 21:54:48 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_strcmp(const char *s1,
		  const char *s2)
{
  int	i;

  i = -1;
  while (s1[++i] != '\0' && s2[i] != '\0')
  {
    if (s1[i] < s2[i])
      return (-1);
    else if (s1[i] > s2[i])
      return (1);
  }
  if (my_strlen(s1) != my_strlen(s2))
    return ((my_strlen(s1) > my_strlen(s2)) ? (1) : (-1));
  return (0);
}
