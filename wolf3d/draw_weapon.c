/*
** draw_weapon.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Dec 31 00:38:40 2010 melvin laplanche
** Last update Fri Dec 31 17:36:04 2010 melvin laplanche
*/

#include <stdlib.h>
#include <graph.h>
#include "wolf.h"

void		draw_weapon(t_core *core)
{
  t_pos		size;
  t_point	pt2;
  t_point	pt;
  t_point	start;

  if (core->opts.texture != NULL)
  {
    size.x = (WIN_WIDTH >> 2);
    start.x = (WIN_WIDTH >> 1) - size.x / 2;
    size.y = (size.x / core->textures.weap0_size.w);
    size.y *= core->textures.weap0_size.h;
    start.y = (WIN_HEIGHT - size.y) + core->indic.weap_pos;
    pt.y = start.y;
    while (++pt.y < size.y + start.y && pt.y < WIN_HEIGHT)
    {
      pt.x = start.x;
      while (++pt.x < size.x + start.x)
      {
	pt2.y = ((pt.y - start.y) / size.y) * core->textures.weap0_size.h;
	pt2.x = ((pt.x - start.x) / size.x) * core->textures.weap0_size.w;
	gf_copy_px(core->textures.weap0, &pt2, core->mlx.img, &pt);
      }
    }
  }
}
