/*
** callback_sort_int.c for my_ls in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Dec 11 15:23:36 2010 melvin laplanche
** Last update Mon Dec 13 00:54:02 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

int	callback_sort_int(void *nb1,
			  void *nb2)
{
  return (*((int*)nb1) < *((int*)nb2));
}
