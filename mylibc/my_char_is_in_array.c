/*
** my_char_is_in_array.c for libmy in /home/laplan_m//Src/Epitech/Projets/Bistro
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov  2 22:43:28 2010 melvin laplanche
** Last update Wed Dec 15 22:01:41 2010 melvin laplanche
*/

#include "my.h"

int	my_char_is_in_array(char	c,
			    const char	*array)
{
  int	i;

  i = -1;
  while (array[++i] != '\0')
  {
    if (c == array[i])
      return (1);
  }
  return (0);
}
