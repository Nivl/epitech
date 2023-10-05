/*
** all_printf.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Nov 20 17:12:45 2010 melvin laplanche
** Last update Wed Dec 15 23:28:29 2010 melvin laplanche
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

__attribute__((format(printf, 1, 2)))
int		my_printf(const char *str,
			  ...)
{
  va_list	ap;
  char		*new_str;
  int		ret;

  new_str = my_strdup(str);
  va_start(ap, str);
  new_str = pf_parser(new_str, &ap);
  va_end(ap);
  my_putstr(new_str);
  ret = my_strlen(new_str);
  free(new_str);
  return (ret);
}

__attribute__((format(printf, 2, 3)))
int	my_fprintf(int		fd,
		   const char	*str,
		   ...)
{
  va_list	ap;
  char		*new_str;
  int		ret;

  new_str = my_strdup(str);
  va_start(ap, str);
  new_str = pf_parser(new_str, &ap);
  va_end(ap);
  xwrite(fd, new_str, my_strlen(new_str));
  ret = my_strlen(new_str);
  free(new_str);
  return (ret);
}

__attribute__((format(printf, 2, 3)))
int	my_sprintf(char	      *dest,
		   const char *str,
		   ...)
{
  va_list	ap;
  char		*new_str;
  int		ret;

  new_str = my_strdup(str);
  va_start(ap, str);
  new_str = pf_parser(new_str, &ap);
  va_end(ap);
  dest = my_strcpy(dest, new_str);
  ret = my_strlen(dest);
  free(new_str);
  return (ret);
}

__attribute__((format(printf, 3, 4)))
int	my_snprintf(char	*dest,
		    size_t	size,
		    const char	*str,
		    ...)
{
  va_list	ap;
  char		*new_str;
  int		ret;

  new_str = my_strdup(str);
  va_start(ap, str);
  new_str = pf_parser(new_str, &ap);
  va_end(ap);
  dest = my_strncpy(dest, new_str, size);
  ret = my_strlen(dest);
  free(new_str);
  return (ret);
}

__attribute__((format(printf, 1, 2)))
char	*my_sprintf_dup(const char *str,
			...)
{
  va_list	ap;
  char		*new_str;

  new_str = my_strdup(str);
  va_start(ap, str);
  new_str = pf_parser(new_str, &ap);
  va_end(ap);
  return (new_str);
}
