/*
** my_char_is_alpha.c for my_char_is_alpha in /home/laplan_m//exo/piscine/Jour_08/wordtab
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Oct 15 13:05:18 2010 melvin laplanche
** Last update Thu Nov  4 00:02:46 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_char_is_alpha(char c)
{
  return ((c >= '0' && c <= '9') ||
	  (c >= 'a' && c <= 'z') ||
	  (c >= 'A' && c <= 'Z'));
}
