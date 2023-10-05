/*
** xgetgrgid.c for libx in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Dec 10 14:54:34 2010 melvin laplanche
** Last update Mon Dec 13 18:58:00 2010 melvin laplanche
*/

#include <stdlib.h>
#include <sys/types.h>
#include <grp.h>
#include <errno.h>
#include "x.h"

struct group	*xgetgrgid(gid_t	gid,
			   unsigned int	flags)
{
  struct group	*ret;

  errno = 0;
  if ((ret = getgrgid(gid)) == NULL)
  {
    if (!(flags & QUIET))
    {
      if (errno == ENOMEM || errno == ERANGE)
	xwrite(2, "xgetgrgid: Insufficient memory or buffer space.\n", 48);
      else if (errno == EIO)
	xwrite(2, "xgetgrgid: I/O error.\n", 22);
      else if (errno == EINTR)
	xwrite(2, "xgetgrgid: A signal was caught.\n", 32);
      else if (errno == ENFILE || errno == EMFILE)
	xwrite(2, "xgetgrgid: Too many files are open.\n", 36);
      else
	xwrite(2, "xgetgrgid: gid not found.\n", 26);
    }
    if (flags & QOF)
      exit(EXIT_SUCCESS);
  }
  return (ret);
}
