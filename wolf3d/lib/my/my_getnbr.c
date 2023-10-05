/*
** my_getnbr.c for my_getnbr in /home/laplan_m//afs
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct  7 12:38:55 2010 melvin laplanche
** Last update Wed Dec  1 22:12:19 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

static int	my_getnbr_process(char, int*, int*, int*);

int	my_getnbr(const char *str)
{
  int	add;
  int	i;
  int	ret;
  int   mult;

  mult = 1;
  add = 0;
  ret = 0;
  i = 0;
  while (my_getnbr_process(str[i], &ret, &add, &mult) && str[i++] != '\0');
  return (ret * mult);
}

static int	my_getnbr_process(char c,
				  int *ret,
				  int *add,
				  int *mult)
{
  if (c >= '0' && c <= '9')
    {
      *ret = *ret * *add + (c - '0');
      if (*add == 0)
	*add = 10;
    }
  else
    {
      if ((c == '-'
	   || c == '+')
	  && *ret == 0)
	{
	  if (c == '-')
	    *mult = *mult * -1;
	}
      else
	return (0);
    }
  return (1);
}

