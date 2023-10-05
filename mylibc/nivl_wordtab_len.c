/*
** wordtab_len.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 16 21:36:27 2010 melvin laplanche
** Last update Sat Dec 18 23:18:01 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

size_t	nivl_wordtab_len(char **wt)
{
  int	i;

  i = -1;
  while (wt[++i] != NULL);
  return (i);
}
