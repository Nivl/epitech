/*
** my_strcapitalize.c for my_strcapitalize in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Oct 11 16:04:35 2010 melvin laplanche
** Last update Sun Oct 24 18:37:29 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

char	my_char_change_case(char, int);

char	*my_strcapitalize(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (i == 0)
	{
	  if (str[i] >= 'a' && str[i] <= 'z')
	    str[i] = str[i] - 32;

	}
      else
	{
	  if (!my_char_is_alpha(str[i - 1]))
	    str[i] = my_char_change_case(str[i], 0);
	  else
	    str[i] = my_char_change_case(str[i], 1);
	}
    }
  return (str);
}

char	my_char_change_case(char c,
			    int to_lower)
{
  if (to_lower)
    {
      if (c >= 'A' && c <= 'Z')
	c = c + 32;
    }
  else
    {
      if (c >= 'a' && c <= 'z')
	c = c - 32;
    }
  return (c);
}

