/*
** get_pad_info.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Nov 15 18:58:53 2010 melvin laplanche
** Last update Wed Dec 15 22:14:43 2010 melvin laplanche
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"
#include "g_printf.h"

static void	pf_check_pad_flag(char    *str,
				  t_pad   *out)
{
  char		*pos;

  if ((pos = my_strstr(str, " ")) != NULL)
    {
      out->c = ' ';
      out->size = (!out->size) ? (my_getnbr(pos + 1)) : (out->size);
      out->force_size = 1;
    }
  else if ((pos = my_strstr(str, "+")) != NULL)
    {
      out->c = ' ';
      out->size = (!out->size) ? (my_getnbr(pos + 1)) : (out->size);
    }
}

void	pf_get_pad_info(char    *str,
			va_list *ap,
			t_pad   *out)
{
  char	*pos;
  int	pad_s;

  out->force_size = 0;
  out->size = 0;
  out->c = ' ';
  out->left = 1;
  if (nivl_count_char_occ(str, '*') == 2
      || (my_strstr(str, ".*") == NULL && my_strstr(str, "*") != NULL))
    out->size = va_arg(*ap, int);
  if (my_char_is_num(str[0]) && (pad_s = my_getnbr(str)) != 0)
    out->size = pad_s;
  else if ((pos = my_strstr(str, "0")) != NULL && !my_strstr(str, "-"))
    {
      out->size = (!out->size) ? (my_getnbr(pos + 1)) : (out->size);
      out->c = '0';
    }
  else if ((pos = my_strstr(str, "-")) != NULL)
    {
      out->size = (!out->size) ? (my_getnbr(pos + 1)) : (out->size);
      out->left = 0;
    }
  else
    pf_check_pad_flag(str, out);
}
