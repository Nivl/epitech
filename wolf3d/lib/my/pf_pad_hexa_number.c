/*
** pad_hexa_number.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 17 22:33:27 2010 melvin laplanche
** Last update Mon Nov 22 22:17:41 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

char	*pf_pad_hexa_number(char *val,
			    char  conv_spe)
{
  char	*ret;

  ret = xmalloc(sizeof(*ret) * (my_strlen(val) + 2));
  ret[0] = '0';
  ret[1] = conv_spe;
  ret[2] = 0;
  my_strcat(ret, val);
  free(val);
  val = ret;
  return (val);
}
