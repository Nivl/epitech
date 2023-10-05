/*
** load_texture.c for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 30 17:42:44 2010 melvin laplanche
** Last update Sat Jan  1 18:35:06 2011 melvin laplanche
*/

#include <x.h>
#include <my.h>
#include <mlx.h>
#include <graph.h>
#include "wolf.h"

static void	load_weapons(t_core*);
static void	load_walls(t_core*);

void	load_texture(t_core *core)
{
  load_walls(core);
  load_weapons(core);
}

static void	load_walls(t_core *core)
{
  char		*num;
  char		*texname;
  int		i;
  size_t	size;
  t_textures	*texs;

  size = core->opts.tex_nb_wall;
  texs = &core->textures;
  texs->walls = xmalloc(sizeof(*texs->walls) * size);
  texs->walls_size = xmalloc(sizeof(*texs->walls_size) * size);
  i = -1;
  while (++i < core->opts.tex_nb_wall)
  {
    num = convert_from_int(i + 1, "0123456789");
    texname = nivl_concat(4, core->opts.texture, "/wall_", num, ".xpm");
    texs->walls[i] = mlx_xpm_file_to_image(core->mlx.ptr,
					   texname,
					   &texs->walls_size[i].w,
					   &texs->walls_size[i].h);
    if ((texs->walls[i]) == NULL)
      nivl_die("Can't load %s.\n", texname);
    free(texname);
    free(num);
  }
}

static void	load_weapons(t_core *core)
{
  char	*tex;

  tex = nivl_concat(2, core->opts.texture, "/weapon_0.xpm");
  core->textures.weap0 = mlx_xpm_file_to_image(core->mlx.ptr,
					       tex,
					       &core->textures.weap0_size.w,
					       &core->textures.weap0_size.h);
  if ((core->textures.weap0) == NULL)
    nivl_die("Can't load %s.\n", tex);
  free(tex);
}
