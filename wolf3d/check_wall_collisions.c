/*
** check_wall_collisions.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 30 01:26:44 2010 melvin laplanche
** Last update Sat Jan  1 16:17:05 2011 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

int	check_wall_collisions_x(t_core	*core,
				float	old_y,
				float	x)
{
  if (x >= core->map_size.x - 1
      || x < 1
      || core->map[((int)core->map_size.y - 1) - (int)old_y][(int)x] < 0)
    return (0);
  return (1);
}

int	check_wall_collisions_y(t_core	*core,
				float	y,
				float	old_x)
{
  if (y >= core->map_size.y - 1
      || y < 1
      || core->map[((int)core->map_size.y - 1) - (int)y][(int)old_x] < 0)
    return (0);
  return (1);
}
