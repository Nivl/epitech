/*
** my_putchar.c for my_putchar in /home/laplan_m//afs/rendu/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Oct 12 09:36:31 2010 melvin laplanche
** Last update Wed Nov  3 22:52:49 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

void	my_putchar(char c)
{
  xwrite(1, &c, 1);
}
