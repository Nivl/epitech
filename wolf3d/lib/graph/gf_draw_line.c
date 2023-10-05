/*
** draw_px.c for lgraph in /home/laplan_m/Src/Epitech/Tp/lgraph/images
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 24 10:01:44 2010 melvin laplanche
** Last update Wed Dec  1 01:07:55 2010 melvin laplanche
*/

#include <stdlib.h>
#include <mlx.h>
#include <my.h>
#include "graph.h"

static void	from_same_axe(void    *img,
			      t_point *p1,
			      t_point *p2,
			      t_rgb   color)
{
  int		max;
  t_px		px;

  px.color = color;
  if (p1->x == p2->x)
    {
      px.point.x = p1->x;
      px.point.y = MIN(p1->y, p2->y) - 1;
      max = MAX(p1->y, p2->y);
      while (++px.point.y <= max)
	gf_draw_px(img, &px);
    }
  else
    {
      px.point.y = p1->y;
      px.point.x = MIN(p1->x, p2->x) - 1;
      max = MAX(p1->x, p2->x);
      while (++px.point.x <= max)
	gf_draw_px(img, &px);
    }
}

static void	from_same_point(void    *img,
				t_point *p,
				t_rgb   color)
{
  t_px		px;

  px.color = color;
  px.point = *p;
  gf_draw_px(img, &px);
}

static void	from_left_to_right(void    *img,
				   t_point *p1,
				   t_point *p2,
				   t_rgb   color)
{
  t_px		px;

  px.color = color;
  px.point.x = p1->x - 1;
  while (++px.point.x <= p2->x)
    {
      px.point.y = ((p2->y - p1->y) * (px.point.x - p1->x)) / (p2->x - p1->x);
      px.point.y += p1->y;
      gf_draw_px(img, &px);
    }
}

static void from_bottom_to_top(void    *img,
			       t_point *p1,
			       t_point *p2,
			       t_rgb   color)
{
  t_px		px;

  px.color = color;
  px.point.y = p1->y - 1;
  while (++px.point.y <= p2->y)
    {
      px.point.x = ((p2->x - p1->x) * (px.point.y - p1->y)) / (p2->y - p1->y);
      px.point.x += p1->x;
      gf_draw_px(img, &px);
    }
}

void	gf_draw_line(void    *img,
		     t_point *p1,
		     t_point *p2,
		     t_rgb   color)
{
  if (p1->x == p2->x && p1->y == p2->y)
    from_same_point(img, p1, color);
  else if (p1->x == p2->x || p1->y == p2->y)
    from_same_axe(img, p1, p2, color);
  else if (ABS(p1->x - p2->x) >= ABS(p1->y - p2->y))
    {
      if (p1->x > p2->x)
	from_left_to_right(img, p2, p1, color);
      else
	from_left_to_right(img, p1, p2, color);
    }
  else
    {
      if (p1->y > p2->y)
	from_bottom_to_top(img, p2, p1, color);
      else
	from_bottom_to_top(img, p1, p2, color);
    }
}
