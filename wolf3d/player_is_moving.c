/*
** player_is_moving.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Dec 29 02:48:48 2010 melvin laplanche
** Last update Wed Dec 29 02:50:50 2010 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

int	player_is_moving(t_core	*core)
{
  return (core->keys.w
	  || core->keys.s
	  || core->keys.a
	  || core->keys.d
	  || core->keys.left
	  || core->keys.right);
}
