/*
** wolf_destroy.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 18:17:05 2010 melvin laplanche
** Last update Tue Jan 11 01:20:54 2011 melvin laplanche
*/

#include <stdlib.h>
#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

static void	free_map(t_core*);

void	wolf_destroy(t_core *core)
{
  free_map(core);
  gf_free_mlx(&core->mlx);
  free_opt(core);
  free(core);
}

static void	free_map(t_core *core)
{
  int		i;

  i = -1;
  while (core->map[++i][0] != 0)
    free(core->map[i]);
  free(core->map[i]);
  free(core->map);
}
