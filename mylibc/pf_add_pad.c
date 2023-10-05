/*
** add_pad.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 16 23:48:19 2010 melvin laplanche
** Last update Wed Dec  1 01:54:07 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

static char	*pf_add_pad_continue(char  *str,
				     t_pad *pad_info)
{
  if (pad_info->c == '0' && str[0] == '-')
    return (pf_pad_zero(str, pad_info));
  else if (pad_info->c == '0'
	   && str[0] == '0'
	   && (str[1] == 'x' || str[1] == 'X'))
    return (pf_repad_hexa_number(str, pad_info->c, pad_info->size));
  else if (pad_info->left == 1)
    return (nivl_pad_left(str, pad_info->c, pad_info->size));
  else
    return (nivl_pad_right(str, pad_info->c, pad_info->size));
}

char	*pf_add_pad(char  *str,
		    t_pad *pad_info,
		    char  *arg_opt)
{
  int	min_size;

  if (my_char_is_in_array('s', arg_opt) || my_char_is_in_array('S', arg_opt))
    min_size = 1;
  else
    min_size = my_strlen(str) + 1;
  if (pad_info->force_size &&
      (my_char_is_in_array('i', arg_opt) || my_char_is_in_array('d', arg_opt))
      && my_strstr(arg_opt, " ") != NULL
      && *str == '-')
    return (str);
  if ((my_char_is_in_array('i', arg_opt) || my_char_is_in_array('d', arg_opt))
      && my_strstr(arg_opt, " ") != NULL
      && *str == '-')
    return (str);
  if (pad_info->force_size && pad_info->size < min_size)
    pad_info->size = min_size;
  return (pf_add_pad_continue(str, pad_info));
}
