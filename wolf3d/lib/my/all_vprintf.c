/*
** all_printf.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Nov 20 17:12:45 2010 melvin laplanche
** Last update Thu Dec 16 12:51:09 2010 melvin laplanche
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

int		my_vprintf(const char *str,
			   va_list	ap)
{
  char		*new_str;
  int		ret;
  va_list	apc;

  va_copy(apc, ap);
  new_str = my_strdup(str);
  new_str = pf_parser(new_str, &apc);
  my_putstr(new_str);
  ret = my_strlen(new_str);
  free(new_str);
  return (ret);
}

int	my_vfprintf(int		fd,
		    const char	*str,
		    va_list	ap)
{
  char		*new_str;
  int		ret;
  va_list	apc;

  va_copy(apc, ap);
  new_str = my_strdup(str);
  new_str = pf_parser(new_str, &apc);
  xwrite(fd, new_str, my_strlen(new_str));
  ret = my_strlen(new_str);
  free(new_str);
  return (ret);
}

int	my_vsprintf(char	*dest,
		    const char	*str,
		    va_list	ap)
{
  char		*new_str;
  int		ret;
  va_list	apc;

  va_copy(apc, ap);
  new_str = my_strdup(str);
  new_str = pf_parser(new_str, &apc);
  dest = my_strcpy(dest, new_str);
  ret = my_strlen(dest);
  free(new_str);
  return (ret);
}

int	my_vsnprintf(char	*dest,
		     size_t	size,
		     const char	*str,
		     va_list	ap)
{
  char		*new_str;
  int		ret;
  va_list	apc;

  va_copy(apc, ap);
  new_str = my_strdup(str);
  new_str = pf_parser(new_str, &apc);
  dest = my_strncpy(dest, new_str, size);
  ret = my_strlen(dest);
  free(new_str);
  return (ret);
}

char	*my_vsprintf_dup(const char *str,
			 va_list    ap)
{
  char		*new_str;
  va_list	apc;

  va_copy(apc, ap);
  new_str = my_strdup(str);
  new_str = pf_parser(new_str, &apc);
  return (new_str);
}
