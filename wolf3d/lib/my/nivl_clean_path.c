/*
** nivl_clean_path.c for  in /home/laplan_m/Src/Epitech/Projets/C/minishell1/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Dec 23 17:06:02 2010 melvin laplanche
** Last update Thu Dec 23 22:31:52 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

static char	**remove_parents(char**);
static char	*parse_home(char*, char*);

char	*nivl_clean_path(char *path,
			 char *home)
{
  char	*tmp;
  char	**dirs;

  tmp = nivl_str_replace("//", "/", path);
  free(path);
  tmp = parse_home(tmp, home);
  dirs = nivl_str_explode(tmp, "/");
  free(tmp);
  dirs = remove_parents(dirs);
  tmp = nivl_str_implode(dirs, "/");
  nivl_free_wordtab(dirs);
  return (tmp);
}

static char	*parse_home(char *path,
			    char *home)
{
  char		*new_path;

  if (home != NULL && my_strncmp(path, "~/", 2) == 0)
  {
    new_path = nivl_concat(3, home, "/", home);
    new_path = nivl_str_replace("//", "/", new_path);
    free(path);
    return (new_path);
  }
  else
    return (path);
}

static char	**remove_parents(char **wt)
{
  int		i;
  int		len;
  int		j;
  char		**ret;

  i = -1;
  j = 0;
  len = nivl_wordtab_len(wt);
  ret = xmalloc(sizeof(*ret) * (len + 1));
  while (wt[++i] != NULL)
  {
    if (my_strcmp("..", wt[i]) == 0)
    {
      if (j > 0)
	free(ret[--j]);
    }
    else if (my_strcmp(".", wt[i]) != 0)
      ret[j++] = my_strdup(wt[i]);
  }
  while (j <= len)
    ret[j++] = NULL;
  nivl_free_wordtab(wt);
  return (ret);
}
