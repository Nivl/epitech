/*
** draw_px.c for lgraph in /home/laplan_m/Src/Epitech/Tp/lgraph/images
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 24 10:01:44 2010 melvin laplanche
** Last update Fri Dec 31 03:14:33 2010 melvin laplanche
*/

#include <mlx.h>
#include "graph.h"

void	gf_draw_px(void *img,
		   t_px *px)
{
  int	index;
  char	*data;

  gf_get_data_and_index(img, &px->point, &data, &index);
  data[index + 2] = px->color.r;
  data[index + 1] = px->color.g;
  data[index] = px->color.b;
}
