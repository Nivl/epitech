/*
** nivl_count_char_occ.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Nov 20 15:56:32 2010 melvin laplanche
** Last update Wed Dec 15 22:13:33 2010 melvin laplanche
*/

#include "my.h"

int	nivl_count_char_occ(const char	*str,
			    char	c)
{
  int	i;
  int	count;

  i = -1;
  count = 0;
  while (str[++i] != 0)
    {
      if (str[i] == c)
	++count;
    }
  return (count);
}
