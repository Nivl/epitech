/*
** move_player.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 19:20:54 2010 melvin laplanche
** Last update Fri Dec 31 16:12:03 2010 melvin laplanche
*/

#include <graph.h>
#include <math.h>
#include <my.h>
#include "wolf.h"

static void	move_forward_backward(t_core*);
static void	move_lateral(t_core*);

void	move_player(t_core *core)
{
  move_forward_backward(core);
  move_lateral(core);
  if (core->keys.a == 1)
    core->angle += SPEED_ROT * (core->indic.speed_mult);
  else if (core->keys.d == 1)
    core->angle -= SPEED_ROT * (core->indic.speed_mult);
}

static void	move_forward_backward(t_core *core)
{
  float		x;
  float		y;
  float		speed;

  speed = SPEED * core->indic.speed_mult;
  x = core->xy0.x;
  y = core->xy0.y;
  if (core->keys.w == 1)
  {
    x = core->xy0.x + (speed * cos(core->angle));
    y = core->xy0.y + (speed * sin(core->angle));
  }
  else if (core->keys.s == 1)
  {
    x = core->xy0.x - (speed * cos(core->angle));
    y = core->xy0.y - (speed * sin(core->angle));
  }
  if (check_wall_collisions_x(core, core->xy0.y, x))
    core->xy0.x = x;
  if (check_wall_collisions_y(core, y, core->xy0.x))
    core->xy0.y = y;
}

static void	move_lateral(t_core *core)
{
  float		x;
  float		y;
  float		speed;

  speed = SPEED * core->indic.speed_mult;
  x = core->xy0.x;
  y = core->xy0.y;
  if (core->keys.left == 1)
  {
    x = core->xy0.x + (speed * cos(core->angle + 1.5707963));
    y = core->xy0.y + (speed * sin(core->angle + 1.5707963));
  }
  else if (core->keys.right == 1)
  {
    x = core->xy0.x + (speed * cos(core->angle - 1.5707963));
    y = core->xy0.y + (speed * sin(core->angle - 1.5707963));
  }
  if (check_wall_collisions_x(core, core->xy0.y, x))
    core->xy0.x = x;
  if (check_wall_collisions_y(core, y, core->xy0.x))
    core->xy0.y = y;
}
