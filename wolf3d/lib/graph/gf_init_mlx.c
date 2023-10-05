/*
** gf_init.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d/lib/graph
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 16:31:01 2010 melvin laplanche
** Last update Sun Dec 26 23:35:11 2010 melvin laplanche
*/

#include <stdlib.h>
#include <my.h>
#include <mlx.h>
#include "graph.h"

t_mlx	gf_init_mlx(int	w,
		    int	h,
		    const char *title)
{
  t_mlx	mlx;

  if ((mlx.ptr = mlx_init()) == NULL)
    nivl_die("Can't init mlx.\n");
  if ((mlx.win = mlx_new_window(mlx.ptr, w, h, title)) == NULL)
    nivl_die("Can't create a new window.\n");
  mlx.img = gf_new_image(&mlx, w, h);
  return (mlx);
}
