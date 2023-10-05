/*
** my_sort_int_tab.c for my_sort_int_tab in /home/laplan_m//afs
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct  7 15:54:55 2010 melvin laplanche
** Last update Wed Nov 10 21:17:20 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_sort_int_tab_process(int*, int);

void	my_sort_int_tab(int *tab, int size)
{
  while (my_sort_int_tab_process(tab, size));
}

int	my_sort_int_tab_process(int *tab, int size)
{
  int	i;
  int	tmp;
  int	ret;

  ret = 0;
  i = 0;
  while (i < size - 1)
    {
      if (tab[i] > tab[i + 1])
	{
	  tmp = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = tmp;
	  ret = 1;
	}
      i = i + 1;
    }
  return (ret);
}
