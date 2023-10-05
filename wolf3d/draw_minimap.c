/*
** draw_minimap.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Jan 11 21:32:36 2011 melvin laplanche
** Last update Wed Jan 12 15:41:40 2011 melvin laplanche
*/

#include <mlx.h>
#include <my.h>
#include <graph.h>
#include "wolf.h"

static t_rgb	get_color(t_core*, t_isize*, t_px);

void		draw_minimap(t_core *core)
{
  t_isize	u;
  t_px		px;

  u.w = core->xy0.x;
  u.h = (core->map_size.y - 1) - (int)core->xy0.y;
  if (core->minimap.last_user_pos.x == u.w
      && core->minimap.last_user_pos.y == u.h)
    return ;
  core->minimap.last_user_pos.x = u.w;
  core->minimap.last_user_pos.y = u.h;
  px.point.y = -1;
  while (++px.point.y < core->minimap.size.h)
  {
    px.point.x = -1;
    while (++px.point.x < core->minimap.size.w)
    {
      px.color = get_color(core, &u, px);
      gf_draw_px(core->minimap.img, &px);
    }
  }
}

static t_rgb	get_color(t_core  *core,
			  t_isize *u,
			  t_px	  px)
{
  int		y;

  y = px.point.y / core->minimap.px_size;
  if (y == u->h && (px.point.x / core->minimap.px_size) == u->w)
    return (gf_green());
  else if (core->map[y][px.point.x / core->minimap.px_size] <= 0)
    return (gf_black());
  return (gf_white());
}
