/*
** xstat.c for libx in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec  5 19:02:04 2010 melvin laplanche
** Last update Thu Dec 16 21:14:02 2010 melvin laplanche
*/

#include <sys/types.h>
#include <sys/stat.h>
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

int	xlstat(const char   *path,
	       struct stat  *buf,
	       unsigned int flags)
{
  int	ret;

  errno = 0;
  if ((ret = lstat(path, buf)) == -1)
  {
    if (!(flags & QUIET))
    {
      xwrite(2, "Cannot open ", 12);
      x_putstr_err(path);
      if (errno == EACCES)
	xwrite(2, ": Permission denied.\n", 21);
      else if (errno == ENOENT)
	xwrite(2, ": No such file or directory.\n", 29);
      else if (errno == ENAMETOOLONG)
	xwrite(2, ": The filename is too long.\n", 28);
      else if (errno == ENOMEM)
	xwrite(2, ": Out of memory.\n", 29);
      else
	xwrite(2, ".\n", 2);
    }
    if (flags & QOF)
      exit(EXIT_FAILURE);
  }
  return (ret);
}
