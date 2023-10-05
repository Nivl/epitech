/*
** gf_get_new_point3D.c for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf/lib/graph
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec  2 22:31:38 2010 melvin laplanche
** Last update Thu Dec  2 22:39:45 2010 melvin laplanche
*/

#include <stdlib.h>
#include "graph.h"

t_point3d		gf_get_new_3d_point(int x,
					    int y,
					    int z)
{
  t_point3d	point;

  point.x = x;
  point.y = y;
  point.y = z;
  return (point);
}
