/*
** draw.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 20:20:12 2010 melvin laplanche
** Last update Wed Jan 12 00:01:22 2011 melvin laplanche
*/

#include <graph.h>
#include <my.h>
#include "wolf.h"

static	void	draw_wall(t_core*, t_target*, t_pos*, int);

void		draw(t_core *core,
		     int    x)
{
  t_pos		xy1;
  t_pos		xyp;
  t_pos		xypp;
  t_pos		vector;
  t_target	target;

  xy1 = calc_xy1(x);
  xyp = calc_xyp(core, &xy1);
  xypp = calc_xypp(core, &xyp);
  vector = calc_vector(core, &xypp);
  target = calc_k(core, &vector);
  if (target.k > -1)
    draw_wall(core, &target, &vector, x);
  else
    draw_background(core, x, WIN_HEIGHT >> 1, (WIN_HEIGHT >> 1) - 1);
}

static void	draw_wall(t_core   *core,
			  t_target *t,
			  t_pos	   *v,
			  int	   x)
{
  if (core->opts.texture == NULL)
    draw_wall_rgb(core, t, v, x);
  else
    draw_wall_tex(core, t, v, x);
}
