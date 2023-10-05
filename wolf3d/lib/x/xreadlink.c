/*
** xreadlink.c for libx in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec  6 21:53:57 2010 melvin laplanche
** Last update Thu Dec 16 16:32:58 2010 melvin laplanche
*/

#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include "x.h"

static void	x_putstr_err(const char *str)
{
  int		i;

  i = -1;
  while (str[++i] != '\0')
    xwrite(2, &str[i], 1);
}

ssize_t		xreadlink(const char	*path,
			  char		*buff,
			  size_t	size,
			  unsigned int	flags)
{
  ssize_t	ret;

  errno = 0;
  if ((ret = readlink(path, buff, size)) == -1)
  {
    if (!(flags & QUIET))
    {
      xwrite(2, "Can't read ", 11);
      x_putstr_err(path);
      if (errno == EACCES)
	xwrite(2, ": Permissions denied", 20);
      else if (errno == ENOENT)
	xwrite(2, ": No such file or directory", 27);
      else if (errno == ENAMETOOLONG)
	xwrite(2, ": the filename is too long", 26);
      else if (errno == ENOTDIR)
	xwrite(2, ": a component of the path prefix is not a directory", 52);
      xwrite(2, ".\n", 2);
    }
    if (flags & QOF)
      exit(EXIT_FAILURE);
  }
  return (ret);
}
