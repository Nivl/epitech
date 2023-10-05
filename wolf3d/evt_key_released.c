/*
** evt_key_released.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 19:14:40 2010 melvin laplanche
** Last update Mon Dec 27 17:48:11 2010 melvin laplanche
*/

#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

int	evt_key_released(int	key,
			 t_core	*core)
{
  switch_key_state(key, core);
  return (1);
}
