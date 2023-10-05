/*
** calc_xyp.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 19:43:19 2010 melvin laplanche
** Last update Tue Jan 11 23:50:04 2011 melvin laplanche
*/

#include <math.h>
#include <graph.h>
#include "wolf.h"

t_pos	calc_xyp(t_core *core,
		 t_pos	*xy1)
{
  t_pos	pos;
  float	vsin;
  float	vcos;

  vcos = cos(core->angle);
  vsin = sin(core->angle);
  pos.x = xy1->x * vcos - xy1->y * vsin;
  pos.y = xy1->x * vsin + xy1->y * vcos;
  return (pos);
}
