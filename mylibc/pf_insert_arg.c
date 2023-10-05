/*
** insert_arg.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 16 17:03:42 2010 melvin laplanche
** Last update Mon Nov 22 22:18:23 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

char	*pf_insert_arg(char *str,
		       char *arg_opt,
		       char *val,
		       int  pass)
{
  char	*tmp;
  int	i;
  int	size;

  size = my_strlen(str) - my_strlen(arg_opt) + my_strlen(val);
  tmp = xmalloc(sizeof(*tmp) * size);
  my_cmemset(tmp, 0, size);
  i = -1;
  if (arg_opt[my_strlen(arg_opt) - 1] == '%')
    --pass;
  while (!(str[++i] == '%' && !pass))
    {
      if (str[i] == '%')
	--pass;
      tmp[i] = str[i];
    }
  tmp = my_strcat(tmp, val);
  tmp = my_strcat(tmp, str + i + my_strlen(arg_opt) + 1);
  free(str);
  str = tmp;
  return (str);
}
