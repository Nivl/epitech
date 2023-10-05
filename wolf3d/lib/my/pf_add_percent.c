/*
** add_percent.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Nov 19 20:37:27 2010 melvin laplanche
** Last update Mon Nov 22 22:26:03 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

char	*pf_add_percent(char **str,
			int  pos)
{
  char	*ret;
  int	i;

  ret = xmalloc((my_strlen(*str) + 2) * sizeof(*ret));
  my_cmemset(ret, 0, (my_strlen(*str) + 2) * sizeof(*ret));
  i = -1;
  while (++i != pos)
    ret[i] = (*str)[i];
  ret[i--] = '%';
  while ((*str)[++i] != 0)
    ret[i + 1] = (*str)[i];
  free(*str);
  *str = ret;
  return (ret);
}

