/*
** nivl_clean_space.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 16 22:10:07 2010 melvin laplanche
** Last update Sat Dec 18 22:49:03 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char	*nivl_clean_space(char *str)
{
  char	*ret;
  int	i;
  int	j;
  int	len;

  len = my_strlen(str);
  i = -1;
  while (str[++i] == ' ' && str[i] != 0);
  if (str[i] != 0)
  {
    j = 0;
    while (str[len - ++j] == ' ' && j >= 0)
      str[len - j] = 0;
    ret = xmalloc(sizeof(*ret) * (len - j - i + 2));
    my_strcpy(ret, str + i);
  }
  else
    ret = NULL;
  free(str);
  return (ret);
}
