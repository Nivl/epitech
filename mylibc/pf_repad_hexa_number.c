/*
** repad_hexa_number.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Nov 20 14:21:56 2010 melvin laplanche
** Last update Mon Nov 22 22:45:26 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

char	*pf_repad_hexa_number(char *str,
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
      ret[size - len + 1] = '0';
      ret[1] = str[1];
      free(str);
      str = ret;
      return (str);
    }
  else
    return (str);
}
