/*
** get_arg_as_int.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 17 22:54:53 2010 melvin laplanche
** Last update Mon Nov 22 23:09:58 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdarg.h>
#include "my.h"
#include "g_printf.h"

long long int	pf_get_arg_as_int(char    *arg_opt,
				  va_list *ap)
{
  if (my_strstr(arg_opt, "hh") != NULL)
    return ((char)va_arg(*ap, int));
  else if (my_strstr(arg_opt, "ll") != NULL)
    return (va_arg(*ap, long long int));
  else if (my_char_is_in_array('h', arg_opt))
    return ((short int)va_arg(*ap, int));
  else if (my_char_is_in_array('l', arg_opt))
    return (va_arg(*ap, long int));
  else if (my_char_is_in_array('j', arg_opt))
    return (va_arg(*ap, intmax_t));
  else if (my_char_is_in_array('z', arg_opt))
    return (va_arg(*ap, size_t));
  else if (my_char_is_in_array('p', arg_opt))
    return (va_arg(*ap, ptrdiff_t));
  else
    return (va_arg(*ap, int));
}

unsigned long long int	pf_get_arg_as_uint(char    *arg_opt,
					   va_list *ap)
{
  if (my_strstr(arg_opt, "hh") != NULL)
    return ((unsigned char)va_arg(*ap, int));
  else if (my_strstr(arg_opt, "ll") != NULL)
    return (va_arg(*ap, unsigned long long int));
  else if (my_char_is_in_array('h', arg_opt))
    return ((unsigned short int)va_arg(*ap, int));
  else if (my_char_is_in_array('l', arg_opt))
    return (va_arg(*ap, unsigned long int));
  else if (my_char_is_in_array('j', arg_opt))
    return (va_arg(*ap, uintmax_t));
  else if (my_char_is_in_array('z', arg_opt))
    return (va_arg(*ap, ssize_t));
  else if (my_char_is_in_array('p', arg_opt))
    return (va_arg(*ap, ptrdiff_t));
  else
    return (va_arg(*ap, unsigned int));
}
