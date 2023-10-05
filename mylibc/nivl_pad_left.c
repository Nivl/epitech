/*
** pad_left.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 16 22:44:40 2010 melvin laplanche
** Last update Mon Nov 22 22:14:07 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char	*nivl_pad_left(char *str,
		       char c,
		       int  size)
{
  int	len;
  int	i;
  char	*ret;

  i = 0;
  len = my_strlen(str);
  if (len < size)
    {
      ret = xmalloc(sizeof(*ret) * (size + 1));
      my_cmemset(ret, c, sizeof(*ret) * (size + 1));
      i = -1;
      while (str[++i] != 0)
	ret[size - len + i] = str[i];
      ret[size - len + i] = 0;
      free(str);
      str = ret;
      return (str);
    }
  else
    return (str);
}
