/*
** gf_get_new_color.c for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Nov 29 22:35:05 2010 melvin laplanche
** Last update Mon Nov 29 23:18:27 2010 melvin laplanche
*/

#include <stdlib.h>
#include "graph.h"

t_rgb	gf_get_new_color(int r,
			 int g,
			 int b)
{
  t_rgb	rgb;

  rgb.r = r;
  rgb.g = g;
  rgb.b = b;
  return (rgb);
}
