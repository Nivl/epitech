/*
** xopendir.c for my_ls in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec  6 21:07:23 2010 melvin laplanche
** Last update Mon Dec 13 20:14:56 2010 melvin laplanche
*/

#include <sys/types.h>
#include <errno.h>
#include <dirent.h>
#include <stdlib.h>
#include "x.h"

static void	x_putstr_err(char *str)
{
  int		i;

  i = -1;
  while (str[++i] != '\0')
    xwrite(2, &str[i], 1);
}

DIR*	xopendir(char	      *path,
		 unsigned int flags)
{
  DIR*	ret;

  errno = 0;
  if ((ret = opendir(path)) == NULL)
  {
    if (!(flags & QUIET))
    {
      xwrite(2, "Can't open ", 11);
      x_putstr_err(path);
      if (errno == EACCES)
	xwrite(2, ": Permissions denied.\n", 22);
      else if (errno == ENOENT)
	xwrite(2, ": No such file or directory.\n", 29);
      else if (errno == ENOTDIR)
	xwrite(2, ": it's not a directory.\n", 24);
      else
	xwrite(2, ".\n", 2);
    }
    if (flags & QOF)
      exit(EXIT_FAILURE);
  }
  return (ret);
}
