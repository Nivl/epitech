/*
** get_next_arg.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 16 16:29:41 2010 melvin laplanche
** Last update Wed Dec 15 22:21:53 2010 melvin laplanche
*/

#include <stdarg.h>
#include <stdlib.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

static int	pf_show_nonprintable_char_get_size(char *str)
{
  int		i;
  int		j;

  i = -1;
  j = 0;
  while (str[++i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	++j;
    }
  return (i + (j * 3));
}

static char	*pf_show_nonprintable_char(char *str)
{
  char		*ret;
  char		*c;
  int		i;
  int		j;

  i = pf_show_nonprintable_char_get_size(str);
  ret = xmalloc(sizeof(*ret) * (i + 1));
  my_cmemset(ret, 0, sizeof(*ret) * (i + 1));
  i = -1;
  j = 0;
  while (str[++i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	{
	  c = convert_from_int(str[i], "01234567");
	  ret[i + j] = '\\';
	  c = nivl_pad_left(c, '0', 3);
	  my_strcat(ret, c);
	  free(c);
	  j += 3;
	}
      else
	ret[i + j] = str[i];
    }
  return (ret);
}

static char	*pf_insert_string(va_list *ap,
				  char    conv_spe,
				  int     *pass)
{
  char		*ret;

  if (conv_spe == 's')
    return (my_strdup(va_arg(*ap, char*)));
  else if (conv_spe == 'S')
    return (pf_show_nonprintable_char(my_strdup(va_arg(*ap, char*))));
  else if (conv_spe == '%')
    {
      ++(*pass);
      ret = xmalloc(sizeof(*ret) * 2);
      ret[0] = '%';
      ret[1] = 0;
      return (ret);
    }
  else
    {
      ret = xmalloc(sizeof(*ret) * 2);
      ret[0] = va_arg(*ap, int);
      ret[1] = 0;
      return (ret);
    }
}

static char	*pf_count_printed_char(char    *str,
				       va_list *ap,
				       int     pass)
{
  int		i;
  int		*n;
  char		*ret;

  i = 0;
  n = va_arg(*ap, int*);
  while (!(str[++i] == '%' && !pass))
    {
      if (str[i] == '%')
	--pass;
    }
  *n = i;
  ret = xmalloc(sizeof(*ret) * 1);
  ret[0] = 0;
  return (ret);
}

char				*pf_get_next_arg(char    *arg_opt,
						 va_list *ap,
						 int     *pass,
						 char    *str)
{
  char				conv_spe;
  unsigned long long int	uval;

  uval = 0;
  conv_spe = arg_opt[my_strlen(arg_opt) - 1];
  if (my_char_is_in_array(conv_spe, "poxXub"))
    uval = pf_get_arg_as_uint(arg_opt, ap);
  if (my_char_is_in_array(conv_spe, "di"))
    return (convert_bint_to_string(pf_get_arg_as_int(arg_opt, ap)));
  else if (conv_spe == 'o')
    return (convert_from_buint(uval, "01234567"));
  else if (conv_spe == 'x')
    return (convert_from_buint(uval, "0123456789abcdef"));
  else if (conv_spe == 'p')
    return (convert_from_buint(uval, "0123456789abcdef"));
  else if (conv_spe == 'X')
    return (convert_from_buint(uval, "0123456789ABCDEF"));
  else if (conv_spe == 'u')
    return (convert_from_buint(uval, "0123456789"));
  else if ((conv_spe == 'b'))
    return (convert_from_buint(uval, "01"));
  else if (conv_spe == 'n')
    return (pf_count_printed_char(str, ap, *pass));
  else
    return pf_insert_string(ap, conv_spe, pass);
}

