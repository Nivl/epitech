/*
** nivl_die.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 16 12:52:01 2010 melvin laplanche
** Last update Thu Dec 16 12:58:57 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

__attribute__ ((noreturn))
__attribute__ ((format(printf, 1, 2)))
void		nivl_die(const char *format,
			 ...)
{
  va_list	ap;

  va_start(ap, format);
  my_vfprintf(FD_STDERR, format, ap);
  va_end(ap);
  exit(EXIT_FAILURE);
}
