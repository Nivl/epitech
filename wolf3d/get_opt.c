/*
** get_opt.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 30 16:53:26 2010 melvin laplanche
** Last update Thu Dec 30 17:50:09 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include <my.h>
#include <graph.h>
#include "wolf.h"

static void	init_opt(t_opts*);
static void	check_opt(t_core*);

void	get_opt(int	ac,
		char	**av,
		t_core	*core)
{
  int	i;
  int	found;

  init_opt(&core->opts);
  found = 0;
  i = 0;
  while (!found && ++i < ac)
    if (my_strncmp(av[i], "--texture=", 10) == 0 && av[i][10] != 0)
      core->opts.texture = nivl_concat(2, "ressources/", av[i] + 10);
  check_opt(core);
}

static void	init_opt(t_opts *opts)
{
  opts->texture = NULL;
}

static void	check_opt(t_core *core)
{
  if (core->opts.texture != NULL)
  {
    if (!sys_is_dir(core->opts.texture, COF | QUIET))
      nivl_die("Can't open the %s directory.\n", core->opts.texture);
    else
      load_texture(core);
  }
}
