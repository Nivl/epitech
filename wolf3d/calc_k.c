/*
** calc_k.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Dec 28 00:23:58 2010 melvin laplanche
** Last update Sat Jan  1 16:13:50 2011 melvin laplanche
*/

#include <graph.h>
#include <my.h>
#include "wolf.h"

static t_target	calc_k_x(t_core*, t_pos*);
static t_target	calc_k_x2(t_core*, t_pos*);
static t_target	calc_k_y(t_core*, t_pos*);
static t_target	calc_k_y2(t_core*, t_pos*);

t_target	calc_k(t_core *core,
		       t_pos  *vector)
{
  t_target	k_x;
  t_target	k_y;

  k_x = (vector->x >= 0) ? calc_k_x(core, vector) : calc_k_x2(core, vector);
  k_y = (vector->y >= 0) ? calc_k_y(core, vector) : calc_k_y2(core, vector);
  if (k_x.k > -1 && k_y.k > -1)
    return ((k_x.k > k_y.k) ? (k_y) : (k_x));
  else
    return ((k_x.k > k_y.k) ? (k_x) : (k_y));
}

static t_target	calc_k_x(t_core *core,
			 t_pos  *vector)
{
  float		k_temp;
  t_target	target;
  float		x;
  float		y;

  target.k = -1;
  x = (int)core->xy0.x;
  while (target.k == -1 && ++x < core->map_size.x && x > -1)
  {
    k_temp = (x - core->xy0.x) / vector->x;
    y = core->xy0.y + k_temp * vector->y;
    if (y >= 0 && y < core->map_size.y)
    {
      if (core->map[((int)core->map_size.y - 1) - (int)y][(int)x] < 0)
      {
	target.k = k_temp;
	target.x = x;
	target.y = y;
      }
    }
  }
  return (target);
}

static t_target	calc_k_x2(t_core *core,
			  t_pos  *vector)
{
  float		k_temp;
  t_target	target;
  float		x;
  float		y;

  target.k = -1;
  x = (int)core->xy0.x;
  while (target.k == -1 && --x >= -1 && x <= core->map_size.x - 1)
  {
    k_temp = (x + 1 - core->xy0.x) / vector->x;
    y = core->xy0.y + k_temp * vector->y;
    if (y >= 0 && y < core->map_size.y)
    {
      if (core->map[((int)core->map_size.y - 1) - (int)y][(int)x] < 0)
      {
	target.k = k_temp;
	target.x = x;
	target.y = y;
      }
    }
  }
  return (target);
}

static t_target	calc_k_y2(t_core *core,
			  t_pos  *vector)
{
  float		k_temp;
  t_target	target;
  float		x;
  float		y;

  target.k = -1;
  y = (int)core->xy0.y;
  while (target.k == -1 && --y >= -1 && y <= core->map_size.y - 1)
  {
    k_temp = (y + 1 - core->xy0.y) / vector->y;
    x = core->xy0.x + k_temp * vector->x;
    if (x >= 0 && x < core->map_size.x)
    {
      if (core->map[((int)core->map_size.y - 1) - (int)y][(int)x] < 0)
      {
	target.k = k_temp;
	target.x = x;
	target.y = y;
      }
    }
  }
  return (target);
}

static t_target	calc_k_y(t_core *core,
			 t_pos  *vector)
{
  float		k_temp;
  t_target	target;
  float		x;
  float		y;

  target.k = -1;
  y = (int)core->xy0.y;
  while (target.k == -1 && ++y < core->map_size.y && y > -1)
  {
    k_temp = (y - core->xy0.y) / vector->y;
    x = core->xy0.x + k_temp * vector->x;
    if (x >= 0 && x < core->map_size.x)
    {
      if (core->map[((int)core->map_size.y - 1) - (int)y][(int)x] < 0)
      {
	target.k = k_temp;
	target.x = x;
	target.y = y;
      }
    }
  }
  return (target);
}
