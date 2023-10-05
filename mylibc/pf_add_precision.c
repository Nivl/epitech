/*
** add_precision.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 17 16:51:47 2010 melvin laplanche
** Last update Mon Nov 22 22:24:34 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include "g_printf.h"

char	*pf_add_precision(char *val,
			  int  precision,
			  char *arg_opt)
{
  if (arg_opt[my_strlen(arg_opt) - 1] != 's')
    return (val);
  if (precision && precision < (int)my_strlen(val))
    val[precision] = 0;
  return (val);
}
