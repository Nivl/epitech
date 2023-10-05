/*
** evt_key_pressed.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 18:23:39 2010 melvin laplanche
** Last update Tue Jan 11 23:01:30 2011 melvin laplanche
*/

#include <stdlib.h>
#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

int	evt_key_pressed(int	key,
			t_core	*core)
{
  if (key == gf_key_escape)
  {
    wolf_destroy(core);
    exit(EXIT_SUCCESS);
  }
  if (key == gf_key_space)
    core->indic.speed_mult = (core->indic.speed_mult == 1) ? (2) : (1);
  else if (key == gf_key_tab)
    core->opts.use_minimap ^= 1;
  else
    switch_key_state(key, core);
  return (1);
}

