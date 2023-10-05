/*
** draw_wall_rgb.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Jan  1 18:15:24 2011 melvin laplanche
** Last update Tue Jan 11 23:37:23 2011 melvin laplanche
*/

#include <graph.h>
#include <my.h>
#include "wolf.h"

static t_rgb	get_color(t_target*, t_pos*);

void	draw_wall_rgb(t_core	*core,
		      t_target	*t,
		      t_pos	*v,
		      int	x)
{
  float		size;
  int		max;
  t_px		px;

  size = get_wall_size(t);
  if (size <= 0)
  {
    draw_background(core, x, WIN_HEIGHT >> 1, (WIN_HEIGHT >> 1) - 1);
    return;
  }
  px.point.x = x;
  px.color = gf_black();
  px.point.y = (WIN_HEIGHT >> 1) + (size / 2);
  gf_draw_px(core->mlx.img, &px);
  px.point.y = (WIN_HEIGHT >> 1) - (size / 2);
  gf_draw_px(core->mlx.img, &px);
  px.color = get_color(t, v);
  px.point.y = (WIN_HEIGHT >> 1) + (size / 2);
  max = (WIN_HEIGHT >> 1) - (size / 2);
  draw_background(core, x, max, px.point.y);
  while (--px.point.y > max)
    gf_draw_px(core->mlx.img, &px);
}

static t_rgb	get_color(t_target	*target,
			  t_pos		*vector)
{
  float		x;
  float		y;

  x = target->x - (int)target->x;
  y = target->y - (int)target->y;
  if (x > y)
    return ((vector->y < 0) ? (gf_get_new_color(255, 255, 0)) : (gf_green()));
  else
    return ((vector->x < 0) ? (gf_get_new_color(255, 0, 255)) : (gf_red()));
}
