/*
** wolf_init.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 18:12:04 2010 melvin laplanche
** Last update Tue Jan 11 21:46:26 2011 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

t_core	*wolf_init(int	ac,
		   char **av)
{
  t_core	*core;

  core = xmalloc(sizeof(*core));
  core->map = parse_map(ac, av, core);
  core->map_size.y = -1;
  while (core->map[(int)++core->map_size.y][0] != 0);
  core->map_size.x = -1;
  while (core->map[0][(int)++core->map_size.x] != 0);
  core->xy0 = get_inital_pos(core->map);
  core->mlx = gf_init_mlx(WIN_WIDTH, WIN_HEIGHT, "Wolf3D");
  get_opt(ac, av, core);
  init_keys(core);
  init_indic(core);
  core->angle = 0;
  init_minimap(core);
  return (core);
}
