/*
** get_inital_pos.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 18:58:06 2010 melvin laplanche
** Last update Sat Jan  1 16:14:54 2011 melvin laplanche
*/

#include <my.h>
#include <graph.h>
#include "wolf.h"

static void	init_pos(t_pos*);

t_pos	get_inital_pos(int **map)
{
  t_pos	pos;
  int	i;
  int	j;
  int	found;

  i = -1;
  found = 0;
  init_pos(&pos);
  while (map[++i][0] != 0)
  {
    j = -1;
    while (map[i][++j] != 0 && !found)
    {
      if (map[i][j] == 2)
      {
	pos.y = i;
	pos.x = j + 0.5;
	found = 1;
      }
    }
  }
  if (!found)
    nivl_die("Start not found in the map.\n");
  pos.y = ((i - 1) - pos.y) + 0.5;
  return (pos);
}

static void	init_pos(t_pos *pos)
{
  pos->x = 0;
  pos->y = 0;
}
