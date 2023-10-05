/*
** main_loop.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 19:15:10 2010 melvin laplanche
** Last update Wed Jan 12 15:37:30 2011 melvin laplanche
*/

#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

int	main_loop(t_core *core,
		  int	 real)
{
  int	x;

  move_player(core);
  if (!real || player_is_moving(core))
  {
    move_weapon(core);
    x = -1;
    while (++x < WIN_WIDTH)
      draw(core, x);
    if (core->opts.use_minimap)
      draw_minimap(core);
    draw_weapon(core);
    display(core);
  }
  return (1);
}
