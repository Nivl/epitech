/*
** main.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 16:00:11 2010 melvin laplanche
** Last update Wed Jan 12 15:37:15 2011 melvin laplanche
*/

#include <stdlib.h>
#include <X11/X.h>
#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

int		main(int  ac,
		     char **av)
{
  t_core	*core;

  core = wolf_init(ac, av);
  mlx_expose_hook(core->mlx.win, display, core);
  mlx_hook(core->mlx.win, KeyPress, KeyPressMask, evt_key_pressed, core);
  mlx_hook(core->mlx.win, KeyRelease, KeyReleaseMask, evt_key_released, core);
  mlx_loop_hook(core->mlx.ptr, main_loop, core);
  main_loop(core, 0);
  mlx_loop(core->mlx.ptr);
  wolf_destroy(core);
  return (EXIT_SUCCESS);
}
