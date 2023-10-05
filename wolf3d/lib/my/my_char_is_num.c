/*
** my_char_is_num.c for libmy in /home/laplan_m//Src/Epitech/Projets/eval_expr
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Oct 24 22:09:52 2010 melvin laplanche
** Last update Sun Oct 24 22:10:17 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	my_char_is_num(char c)
{
  return (c >= '0' && c <= '9');
}
