/*
** gf_get_new_point.c for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Nov 29 22:33:07 2010 melvin laplanche
** Last update Mon Nov 29 23:18:11 2010 melvin laplanche
*/

#include <stdlib.h>
#include "graph.h"

t_point		gf_get_new_point(int x,
				 int y)
{
  t_point	point;

  point.x = x;
  point.y = y;
  return (point);
}
