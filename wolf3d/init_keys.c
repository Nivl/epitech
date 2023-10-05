/*
** init_keys.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Dec 28 19:02:11 2010 melvin laplanche
** Last update Fri Dec 31 16:13:59 2010 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

void	init_keys(t_core *core)
{
  core->keys.w = 0;
  core->keys.s = 0;
  core->keys.a = 0;
  core->keys.d = 0;
  core->keys.right = 0;
  core->keys.left = 0;
}
