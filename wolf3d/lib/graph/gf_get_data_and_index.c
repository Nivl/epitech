/*
** get_get_data_and_index.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d/lib/graph
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 30 18:42:04 2010 melvin laplanche
** Last update Fri Dec 31 03:15:25 2010 melvin laplanche
*/

#include <mlx.h>
#include "graph.h"

void	gf_get_data_and_index(void	*img,
			      t_point	*pt,
			      char	**data,
			      int	*index)
{
  int	size_line;
  int	bpp;
  int	endian;

  *data = mlx_get_data_addr(img, &bpp, &size_line, &endian);
  *index = (pt->y * size_line) + (pt->x * (bpp / 8));
}
