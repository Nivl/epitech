/*
** nivl_concat.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Dec  7 23:15:48 2010 melvin laplanche
** Last update Wed Dec 22 01:51:57 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include <x.h>
#include "my.h"

static char	*get_next_arg(int*, va_list*);

char		*nivl_concat(int nb, ...)
{
  char		*ret;
  char		*str;
  va_list	ap;
  size_t	size;

  va_start(ap, nb);
  if ((str = get_next_arg(&nb, &ap)) == NULL)
    return (NULL);
  size = my_strlen(str) + 1;
  ret = xmalloc(sizeof(*ret) * size);
  ret = my_cmemset(ret, 0, size);
  my_strcpy(ret, str);
  while (--nb > 0)
  {
    if ((str = get_next_arg(&nb, &ap)) != NULL)
    {
      size += my_strlen(str);
      ret = my_c_realloc(ret, size);
      my_strcat(ret, str);
    }
  }
  va_end(ap);
  return (ret);
}

static char	*get_next_arg(int	*nb,
			      va_list	*ap)
{
  char	*str;

  while (*nb > 0)
  {
    str = va_arg(*ap, char*);
    if (str != NULL && str[0] != '0')
      return (str);
    --(*nb);
  }
  return (NULL);
}
