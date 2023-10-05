/*
** draw.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 17:38:49 2010 melvin laplanche
** Last update Wed Jan 12 15:38:05 2011 melvin laplanche
*/

#include <mlx.h>
#include <graph.h>
#include "wolf.h"

int		display(t_core *core)
{
  t_mlx		*mlx;
  t_isize	add;

  mlx = &core->mlx;
  add.w = (WIN_WIDTH / 20) - 2;
  add.h = (WIN_HEIGHT - (WIN_HEIGHT / 20) - core->minimap.size.h) - 2;
  mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->img, 0, 0);
  if (core->opts.use_minimap)
    mlx_put_image_to_window(mlx->ptr,
			    mlx->win,
			    core->minimap.img,
			    add.w,
			    add.h);
  return (1);
}
