/*
** nivl_str_replace.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 19 20:40:58 2010 melvin laplanche
** Last update Sat Dec 25 22:17:41 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

static char	*replace_process(const char*, const char*, char*, char*);

char	*nivl_str_replace(const char *search,
			  const char *replace,
			  char *str)
{
  int	i;
  int	len;
  char	*ret;
  char	*tmp;

  tmp = str;
  i = 0;
  while ((tmp = my_strstr(tmp, search)) != NULL)
  {
    tmp += 1;
    ++i;
  }
  if (i == 0)
    return (my_strdup(str));
  len = my_strlen(str) - (my_strlen(search) * i) + (my_strlen(replace) * i);
  ret = xmalloc(sizeof(*ret) * (len + 1));
  my_cmemset(ret, 0, len + 1);
  replace_process(search, replace, str, ret);
  return (ret);
}

static char	*replace_process(const char *search,
				 const char *replace,
				 char	    *str,
				 char	    *ret)
{
  char		*tmp;
  int		add;
  int		add2;
  int		i;

  tmp = str;
  i = -1;
  add = 0;
  add2 = 0;
  while ((tmp = my_strstr(tmp, search)) != NULL)
  {
    while ((str + add + ++i) != tmp)
      ret[i + add2] = str[i + add];
    add += my_strlen(search) - 1;
    add2 += my_strlen(replace) - 1;
    my_strcat(ret, replace);
    ++tmp;
  }
  while (str[add + ++i] != 0)
    ret[i + add2] = str[i + add];
  return (ret);
}

