/*
** my_strcmp.c for my_strcmp in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 14:16:16 2010 melvin laplanche
** Last update Sat Dec 18 21:56:26 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_strncmp(const char *s1,
		   const char *s2,
		   int n)
{
  int	i;
  int	len1;
  int	len2;

  len1 = my_strlen(s1);
  len2 = my_strlen(s2);
  i = -1;
  while (++i < n && s1[i] != 0 && s2[i] != 0)
  {
    if (s1[i] < s2[i])
      return (-1);
    else if (s1[i] > s2[i])
      return (1);
  }
  if ((len1 != len2) && (len1 < n || len2 < n))
    return ((len1 > len2) ? (1) : (-1));
  return (0);
}
