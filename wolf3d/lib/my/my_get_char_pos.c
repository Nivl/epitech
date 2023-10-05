/*
** my_get_char_pos.c for my_get_char_pos in /home/laplan_m//lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct 14 23:49:28 2010 melvin laplanche
** Last update Wed Dec 15 22:18:26 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_get_char_pos(char	   c,
			const char *to_find,
			int	   occ)
{
  int	i;

  i = -1;
  while (to_find[++i] != '\0')
    {
      if (to_find[i] == c)
	{
	  if (occ > 1)
	    --occ;
	  else
	    return (i);
	}
    }
    return (-1);
}
