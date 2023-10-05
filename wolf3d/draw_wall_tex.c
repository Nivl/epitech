/*
** draw_wall_tex.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Jan  1 18:10:27 2011 melvin laplanche
** Last update Tue Jan 11 23:36:59 2011 melvin laplanche
*/

#include <graph.h>
#include <my.h>
#include "wolf.h"

static int	get_wall_num(t_core*, t_target*);
static void	draw_wall_tex_process(t_core*, t_point*, t_point*, t_target*);

void	draw_wall_tex(t_core	*core,
		      t_target	*t,
		      t_pos	*v,
		      int	x)
{
  float		size;
  int		wnum;
  t_point	pt;
  t_point	pt2;
  t_pos		rest;

  size = get_wall_size(t);
  if (size <= 0)
  {
    draw_background(core, x, WIN_HEIGHT << 1, (WIN_HEIGHT << 1) - 1);
    return;
  }
  rest.x = t->x - (int)t->x;
  rest.y = t->y - (int)t->y;
  wnum = get_wall_num(core, t);
  pt.x = x;
  pt.y = (WIN_HEIGHT >> 1) + (size / 2) - 1;
  pt2.x = rest.x * core->textures.walls_size[wnum].w;
  if (pt2.x == 0 && rest.y != 0)
    pt2.x = rest.y * core->textures.walls_size[wnum].w;
  if ((rest.x <= rest.y && v->x >= 0)
      || (rest.x > rest.y && v->y < 0))
    pt2.x = core->textures.walls_size[wnum].w - pt2.x - 1;
  draw_wall_tex_process(core, &pt, &pt2, t);
}

static void	draw_wall_tex_process(t_core	*core,
				      t_point	*pt,
				      t_point	*pt2,
				      t_target	*t)
{
  int		max;
  int		wnum;
  float		size;
  int		start_y;

  wnum = get_wall_num(core, t);
  size = get_wall_size(t);
  start_y = pt->y;
  max = (WIN_HEIGHT >> 1) - (size / 2);
  draw_background(core, pt->x, max, pt->y);
  while (--pt->y > max)
  {
    pt2->y = ((start_y - pt->y) / size) * core->textures.walls_size[wnum].h;
    pt2->y = core->textures.walls_size[wnum].h - pt2->y - 1;
    gf_copy_px(core->textures.walls[wnum], pt2, core->mlx.img, pt);
  }
}

static int	get_wall_num(t_core   *core,
			     t_target *t)
{
  int	num;

  num = core->map[(int)(core->map_size.y - 1) - (int)t->y][(int)t->x];
  return (ABS(num) - 1);
}
