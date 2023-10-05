/*
** get_wall_size.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Jan  1 18:40:31 2011 melvin laplanche
** Last update Sat Jan  1 18:44:53 2011 melvin laplanche
*/

#include <graph.h>
#include <my.h>
#include "wolf.h"

float	get_wall_size(t_target	*t)
{
  float		size;

  size = WIN_HEIGHT / (2 * t->k);
  if (size >= WIN_HEIGHT)
    size = WIN_HEIGHT - 1;
  return (size);
}
