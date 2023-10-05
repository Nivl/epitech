/*
** parse_map.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec 27 00:08:18 2010 melvin laplanche
** Last update Sat Jan  1 17:41:44 2011 melvin laplanche
*/

#include <stdlib.h>
#include <fcntl.h>
#include <x.h>
#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

static int	**get_map(char*, t_core*);
static int	*parse_line(char*, t_core*);

int	**parse_map(int	   ac,
		    char   **av,
		    t_core *core)
{
  char	*filename;
  int	**map;
  int	i;
  int	found;

  found = 0;
  i = 0;
  while (!found && ++i < ac)
    if (my_strncmp(av[i], "--map=", 6) == 0 && av[i][6] != 0)
      found = 1;
  if (!found)
  {
    my_fprintf(FD_STDERR, "No filename given, assuming map.wlf.\n");
    filename = my_strdup("map.wlf");
  }
  else
    filename = my_strdup(av[i] + 6);
  map = get_map(filename, core);
  free(filename);
  return (map);
}

static int	**get_map(char	 *filename,
			  t_core *core)
{
  int		len;
  int		i;
  int		fd;
  char		*line;
  int		**ret;

  fd = xopen(filename, O_RDONLY, NIL, QOF);
  line = nivl_get_next_line(fd);
  len = my_getnbr(line);
  free(line);
  ret = xmalloc(sizeof(*ret) * (len + 1));
  ret[len] = xmalloc(sizeof(*ret));
  ret[len][0] = 0;
  i = -1;
  core->opts.tex_nb_wall = 0;
  while (++i < len && (line = nivl_get_next_line(fd)) != NULL)
  {
    ret[i] = parse_line(line, core);
    free(line);
  }
  core->opts.tex_nb_wall = ABS(core->opts.tex_nb_wall);
  xclose(fd);
  return (ret);
}

static int	*parse_line(char   *line,
			    t_core *core)
{
  int		len;
  int		i;
  int		*ret;
  char		**tab;

  tab = nivl_str_explode(line, " ");
  len = nivl_wordtab_len(tab);
  ret = xmalloc(sizeof(*ret) * (len + 1));
  ret[len] = 0;
  i = -1;
  while (++i < len)
  {
    ret[i] = my_getnbr(tab[i]);
    if (ret[i] < core->opts.tex_nb_wall)
      core->opts.tex_nb_wall = ret[i];
  }
  nivl_free_wordtab(tab);
  return (ret);
}
