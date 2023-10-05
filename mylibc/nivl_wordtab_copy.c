/*
** nivl_wordtab_copy.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 20 21:48:43 2010 melvin laplanche
** Last update Tue Dec 21 21:08:58 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char	**nivl_wordtab_copy(char **wt)
{
  int	len;
  int	i;
  char	**ret;

  i = -1;
  len = nivl_wordtab_len(wt);
  ret = xmalloc(sizeof(*ret) * (len + 1));
  while (wt[++i] != NULL)
    ret[i] = my_strdup(wt[i]);
  ret[i] = NULL;
  return (ret);
}
