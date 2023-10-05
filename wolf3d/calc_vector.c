/*
** calc_vector.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 20:42:58 2010 melvin laplanche
** Last update Wed Dec 29 03:13:27 2010 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

t_pos	calc_vector(t_core *core,
		    t_pos  *xypp)
{
  t_pos	vector;

  vector.x = xypp->x - core->xy0.x;
  vector.y = xypp->y - core->xy0.y;
  return (vector);
}
