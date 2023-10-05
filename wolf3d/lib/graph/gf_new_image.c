/*
** graph_new_image.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d/lib/graph
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 17:05:46 2010 melvin laplanche
** Last update Sun Dec 26 23:37:31 2010 melvin laplanche
*/

#include <my.h>
#include <mlx.h>
#include "graph.h"

void	*gf_new_image(t_mlx *mlx,
		      int w,
		      int h)
{
  void	*img;

  if ((img = mlx_new_image(mlx->ptr, w, h)) == NULL)
    nivl_die("Can't create a new image.\n");
  return (img);
}
