/*
** init_indic.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Dec 31 16:14:19 2010 melvin laplanche
** Last update Fri Dec 31 17:39:16 2010 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

void	init_indic(t_core *core)
{
  core->indic.weap_pos = 3;
  core->indic.weap_mult = 1;
  core->indic.speed_mult = 1;
}
