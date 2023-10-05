/*
** free_mlx.c for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 30 21:36:20 2010 melvin laplanche
** Last update Sun Dec 26 23:41:22 2010 melvin laplanche
*/

#include <stdlib.h>
#include <mlx.h>
#include "graph.h"

void	gf_free_mlx(t_mlx *mlx)
{
  free(mlx->img);
  mlx_destroy_window(mlx->ptr, mlx->win);
  free(mlx->ptr);
}
