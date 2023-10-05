/*
** pad_zero.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Nov 20 01:21:48 2010 melvin laplanche
** Last update Mon Nov 22 22:14:35 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include "g_printf.h"

char	*pf_pad_zero(char   *str,
		     t_pad  *pad_info)
{
  int	len;

  len = pad_info->size - my_strlen(str);
  str = nivl_pad_left(str, pad_info->c, pad_info->size);
  if (len <= 0)
    return (str);
  str[0] = '-';
  str[len] = '0';
  return (str);
}
