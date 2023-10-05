/*
** calc_xypp.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 19:43:19 2010 melvin laplanche
** Last update Tue Jan 11 23:50:19 2011 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

t_pos	calc_xypp(t_core *core,
		  t_pos	*xyp)
{
  t_pos	pos;

  pos.x = xyp->x + core->xy0.x;
  pos.y = xyp->y + core->xy0.y;
  return (pos);
}
