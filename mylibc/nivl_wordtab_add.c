/*
** nivl_wordtab_add.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 20 21:48:43 2010 melvin laplanche
** Last update Mon Dec 20 22:50:30 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char	**nivl_wordtab_add(char		**wt,
			   const char	*value)
{
  int	len;
  int	i;
  char	**ret;

  i = -1;
  len = nivl_wordtab_len(wt);
  ret = xmalloc(sizeof(*ret) * (len + 2));
  while (wt[++i] != NULL)
    ret[i] = wt[i];
  ret[i] = my_strdup(value);
  ret[i + 1] = NULL;
  free(wt);
  return (ret);
}
