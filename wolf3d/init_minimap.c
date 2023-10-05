/*
** get_minimap_size.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Jan 11 21:10:28 2011 melvin laplanche
** Last update Wed Jan 12 15:34:18 2011 melvin laplanche
*/

#include <mlx.h>
#include <my.h>
#include <graph.h>
#include "wolf.h"

void		init_minimap(t_core *core)
{
  t_isize	max_size;

  max_size.w = (WIN_WIDTH / MINIMAP_RAT) / core->map_size.x;
  max_size.h = (WIN_HEIGHT / MINIMAP_RAT) / core->map_size.y;
  core->minimap.px_size = MIN(max_size.w, max_size.h);
  core->minimap.last_user_pos.x = (int)core->xy0.x;
  core->minimap.last_user_pos.y = (int)core->xy0.y;
  core->minimap.size.w = (core->map_size.x * core->minimap.px_size);
  core->minimap.size.h = (core->map_size.y * core->minimap.px_size);
  core->minimap.img = gf_new_image(&core->mlx,
				   core->minimap.size.w,
				   core->minimap.size.h);
  core->opts.use_minimap = 1;
}
