/*
** xctime.c for libx in /home/laplan_m/Src/Epitech/Projets/C/my_ls/test
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Dec 11 01:04:25 2010 melvin laplanche
** Last update Wed Dec 15 21:57:17 2010 melvin laplanche
*/

#include <stdlib.h>
#include <time.h>
#include "x.h"

char	*xctime(const time_t *date)
{
  char	*ret;

  ret = ctime(date);
  if (ret == NULL)
  {
    xwrite(2, "ctime error.\n", 13);
    exit(EXIT_FAILURE);
  }
  return (ret);
}
