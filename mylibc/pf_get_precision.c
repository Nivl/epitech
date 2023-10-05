/*
** get_precision.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 16 15:15:19 2010 melvin laplanche
** Last update Mon Nov 22 22:19:13 2010 melvin laplanche
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"
#include "g_printf.h"

int	pf_get_precision(char *str,
			 va_list *ap)
{
  char	*pos;

  if ((pos = my_strstr(str, ".")) != NULL)
    {
      if (pos[1] == '*')
	return (va_arg(*ap, int));
      else
	return (my_getnbr(pos + 1));
    }
  return (0);
}
