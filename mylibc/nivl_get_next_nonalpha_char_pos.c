/*
** nivl_get_next_nonalpha_char_pos.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 19 20:21:52 2010 melvin laplanche
** Last update Sun Dec 19 20:24:09 2010 melvin laplanche
*/

#include "my.h"

int	nivl_get_next_nonalpha_char_pos(char *str)
{
  int	i;

  i = -1;
  while (my_char_is_alpha(str[++i]));
  return (i);
}
