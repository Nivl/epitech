/*
** gf_get_new_point.c for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Nov 29 22:33:07 2010 melvin laplanche
** Last update Fri Dec  3 22:31:11 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdio.h>
#include "graph.h"

t_point		gf_get_iso_point(int x,
				 int y,
				 int z,
				 int unit)
{
  t_point	point;

  x *= unit;
  y *= unit;
  z *= (unit / 10);
  point.x = (0.75 * x - 0.6 * y);
  point.y = (z + (0.75 / 2) * x + (0.6 / 2) * y);
  return (point);
}
