/*
** calc_xy1.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 19:43:19 2010 melvin laplanche
** Last update Tue Jan 11 23:45:48 2011 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

t_pos	calc_xy1(int x)
{
  t_pos	pos;

  pos.x = 1;
  pos.y = (1.f * ((WIN_WIDTH >> 1) - x)) / WIN_WIDTH;
  return (pos);
}
