/*
** switch_key_state.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 17:38:00 2010 melvin laplanche
** Last update Tue Dec 28 19:05:25 2010 melvin laplanche
*/

#include <graph.h>
#include "wolf.h"

void	switch_key_state(int	key,
			 t_core	*core)
{
  if (key == gf_key_w)
    core->keys.w ^= 1;
  else if (key == gf_key_s)
    core->keys.s ^= 1;
  else if (key == gf_key_a)
    core->keys.a ^= 1;
  else if (key == gf_key_d)
    core->keys.d ^= 1;
  else if (key == gf_key_left)
    core->keys.left ^= 1;
  else if (key == gf_key_right)
    core->keys.right ^= 1;
}
