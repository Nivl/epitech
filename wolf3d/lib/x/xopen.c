/*
** xopen.c for libx in /home/laplan_m//Src/Epitech/Projets/C/BSQ
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Nov  5 14:44:06 2010 melvin laplanche
** Last update Mon Dec 27 02:26:09 2010 melvin laplanche
*/

#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "x.h"

static void	x_putstr_err(char *str)
{
  int		i;

  i = -1;
  while (str[++i] != '\0')
    xwrite(2, &str[i], 1);
}

static void x_display_error(char *pathname)
{
  xwrite(2, "xopen: ", 7);
  if (errno == EACCES)
  {
    xwrite(2, "You have no access to ", 22);
    x_putstr_err(pathname);
    xwrite(2, ".\n", 2);
  }
  else if (errno == EEXIST)
  {
    x_putstr_err(pathname);
    xwrite(2, "already exists.\n", 16);
  }
  else if (errno == EISDIR)
  {
    x_putstr_err(pathname);
    xwrite(2, "is a directory.\n", 16);
  }
  else
  {
    xwrite(2, "An error occured while opening ", 31);
    x_putstr_err(pathname);
    xwrite(2, ".\n", 2);
  }
}

int	xopen(char	   *pathname,
	      int	   oflags,
	      mode_t	   mode,
	      unsigned int flags)
{
  int	fd;
  errno = 0;
  if ((fd = open(pathname, oflags, mode)) == -1 && !(flags & QUIET))
    x_display_error(pathname);
  if (fd == -1 && (flags & QOF))
    exit(EXIT_FAILURE);
  return (fd);
}
