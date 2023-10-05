/*
** color.c for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf/lib/graph
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Nov 29 23:38:10 2010 melvin laplanche
** Last update Mon Nov 29 23:52:58 2010 melvin laplanche
*/

#include "graph.h"

t_rgb	gf_white(void)
{
  return (gf_get_new_color(255, 255, 255));
}

t_rgb	gf_black(void)
{
  return (gf_get_new_color(0, 0, 0));
}

t_rgb	gf_red(void)
{
  return (gf_get_new_color(255, 0, 0));
}

t_rgb	gf_green(void)
{
  return (gf_get_new_color(0, 255, 0));
}

t_rgb	gf_blue(void)
{
  return (gf_get_new_color(0, 0, 255));
}
