/*
** free_opt.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 30 17:18:10 2010 melvin laplanche
** Last update Sat Jan  1 18:23:55 2011 melvin laplanche
*/

#include <stdlib.h>
#include <graph.h>
#include "wolf.h"

void	free_opt(t_core	*core)
{
  int	i;

  if (core->opts.texture != NULL)
  {
    free(core->opts.texture);
    free(core->textures.weap0);
    i = -1;
    while (++i < core->opts.tex_nb_wall)
      free(core->textures.walls[i]);
    free(core->textures.walls);
    free(core->textures.walls_size);
  }
}
