/*
** add_flag.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 17 17:26:18 2010 melvin laplanche
** Last update Mon Nov 22 22:28:42 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include "g_printf.h"

char	*pf_add_flag(char *val,
		     char *arg_opt)
{
  char	conv_spe;
  char	*pos;
  t_pad	pad_info;

  pad_info.size = my_strlen(val) + 1;
  pad_info.left = 1;
  conv_spe = arg_opt[my_strlen(arg_opt) - 1];
  if (my_char_is_in_array(conv_spe, "di")
      && (pos = my_strstr(arg_opt, "+")) != NULL
      && *val != '-')
    pad_info.c = '+';
  else if (conv_spe == 'o'
	   && my_strstr(arg_opt, "#") != NULL
	   && my_strcmp(val, "0") != 0)
    pad_info.c = '0';
  else if (my_char_is_in_array(conv_spe, "xX")
	   && my_strstr(arg_opt, "#") != NULL
	   && my_strcmp(val, "0") != 0)
    return (pf_pad_hexa_number(val, conv_spe));
  else if (conv_spe == 'p'
	   && my_strcmp(val, "0") != 0)
    return (pf_pad_hexa_number(val, 'x'));
  else
    return (val);
  return (pf_add_pad(val, &pad_info, arg_opt));
}
