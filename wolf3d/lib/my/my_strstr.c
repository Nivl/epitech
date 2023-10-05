/*
** my_strstr.c for my_strstr in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 13:21:50 2010 melvin laplanche
** Last update Sun Dec 19 21:34:39 2010 melvin laplanche
*/

#include "my.h"

char	*my_strstr(char *str,
		   const char *to_find)
{
  int	i;
  int	j;
  char	*pos;

  pos = NULL;
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (to_find[j] == str[i])
	{
	  if (j == 0)
	    pos = (str + i);
	  if (to_find[j + 1] == '\0')
	    return (pos);
	  j = j + 1;
	}
      else
	j = 0;
      i = i + 1;
    }
  return (NULL);
}
