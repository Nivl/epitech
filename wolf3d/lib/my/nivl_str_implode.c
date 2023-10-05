/*
** nivl_str_implode.c for \ in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 23 17:44:19 2010 melvin laplanche
** Last update Thu Dec 23 18:23:15 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char	*nivl_str_implode(char		**tab,
			  const char	*sep)
{
  char	*ret;
  char	*tmp;
  int	i;

  if (tab[0] == NULL)
    return (my_strdup(""));
  ret = my_strdup(tab[0]);
  i = 0;
  while (tab[++i] != 0)
  {
    if (tab[i][0] != 0)
    {
      tmp = nivl_concat(3, ret, sep, tab[i]);
      free(ret);
      ret = tmp;
    }
  }
  return (ret);
}
