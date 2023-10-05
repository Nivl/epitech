/*
** move_weapon.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Dec 31 16:41:19 2010 melvin laplanche
** Last update Tue Jan 11 01:24:27 2011 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

void	move_weapon(t_core *core)
{
  float	speed;

  if (core->keys.w
      || core->keys.s
      || core->keys.left
      || core->keys.right)
  {
    speed = SPEED_WEAP * core->indic.speed_mult * core->indic.weap_mult;
    if (core->indic.weap_pos + speed > 10
	|| core->indic.weap_pos + speed <= 3)
      core->indic.weap_mult = -core->indic.weap_mult;
    core->indic.weap_pos += speed;
  }
}
