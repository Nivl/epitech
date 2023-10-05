/*
** my_show_to_wordtab.c for my_show_to_wordtab in /home/laplan_m//exo/piscine/Jour_08/wordtab
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct 14 17:22:44 2010 melvin laplanche
** Last update Sun Dec 19 17:28:59 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

void	my_show_to_wordtab(char **tab,
			   char separator)
{
  int	i;

  i = -1;
  while (tab[++i] != 0)
  {
    my_putstr(tab[i]);
    my_putchar(separator);
  }
}
