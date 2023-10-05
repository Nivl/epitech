/*
** draw_px.c for lgraph in /home/laplan_m/Src/Epitech/Tp/lgraph/images
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 24 10:01:44 2010 melvin laplanche
** Last update Fri Dec 31 03:16:25 2010 melvin laplanche
*/

#include <mlx.h>
#include <my.h>
#include "graph.h"

void	gf_copy_px(void		*src,
		   t_point	*pt_src,
		   void		*dest,
		   t_point	*pt_dest)
{
  int	index_src;
  char	*data_src;
  int	index_dest;
  char	*data_dest;

  gf_get_data_and_index(src, pt_src, &data_src, &index_src);
  gf_get_data_and_index(dest, pt_dest, &data_dest, &index_dest);
  if (data_src[index_src + 2] != 30
      && (unsigned char)data_src[index_src + 1] != 246
      && (unsigned char)data_src[index_src] != 223)
  {
    data_dest[index_dest + 2] = data_src[index_src + 2];
    data_dest[index_dest + 1] = data_src[index_src + 1];
    data_dest[index_dest] = data_src[index_src];
  }
}
