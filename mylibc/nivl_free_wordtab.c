/*
** free_wordtab.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 16 21:00:43 2010 melvin laplanche
** Last update Sat Dec 18 23:18:55 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

void	nivl_free_wordtab(char **wordtab)
{
  int	i;

  i = -1;
  while (wordtab[++i] != NULL)
    free(wordtab[i]);
  free(wordtab);
}
