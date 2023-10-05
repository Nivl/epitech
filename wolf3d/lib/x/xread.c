/*
** xread.c for libx in /home/laplan_m//Src/Epitech/Projets/C/BSQ
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Nov  5 15:31:05 2010 melvin laplanche
** Last update Mon Dec 13 15:00:44 2010 melvin laplanche
*/

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include "x.h"

ssize_t		xread(int	   fd,
		      void	   *buf,
		      size_t	   count,
		      unsigned int flags)
{
  ssize_t	bytes_read;

  if (count > SSIZE_MAX)
  {
    if (!(flags & QUIET))
      xwrite(2, "xread: count is to big.\n", 24);
    if (flags & QOF)
      exit(EXIT_SUCCESS);
  }
  if ((bytes_read = read(fd, buf, count)) == -1)
  {
    if (!(flags & QUIET))
      xwrite(2, "xread failed to read a file.\n", 29);
    if (flags & QOF)
      exit(EXIT_SUCCESS);
  }
  return (bytes_read);
}
