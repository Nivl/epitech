/*
** draw_background.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Dec 28 16:51:42 2010 melvin laplanche
** Last update Tue Jan 11 01:14:46 2011 melvin laplanche
*/

#include <stdlib.h>
#include <graph.h>
#include "wolf.h"

void	draw_background(t_core	*core,
			int	x,
			int	a,
			int	b)
{
  t_px	px;

  px.point.x = x;
  px.point.y = -1;
  if (core->opts.texture == NULL)
    px.color = gf_blue();
  else
    px.color = gf_get_new_color(119, 181, 254);
  while (++px.point.y < a)
    gf_draw_px(core->mlx.img, &px);
  px.point.y = b - 1;
  if (core->opts.texture == NULL)
    px.color = gf_get_new_color(64, 64, 64);
  else
    px.color = gf_get_new_color(58, 157, 35);
  while (++px.point.y < WIN_HEIGHT)
    gf_draw_px(core->mlx.img, &px);
}
