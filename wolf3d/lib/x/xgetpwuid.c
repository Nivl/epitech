/*
** xgetpwuid.c for libx in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Dec 10 18:50:41 2010 melvin laplanche
** Last update Mon Dec 13 19:00:28 2010 melvin laplanche
*/

#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>
#include <errno.h>
#include "x.h"

struct passwd	*xgetpwuid(uid_t	uid,
			   unsigned int	flags)
{
  struct passwd	*ret;

  errno = 0;
  if ((ret = getpwuid(uid)) == NULL)
  {
    if (!(flags & QUIET))
    {
      if (errno == ENOMEM || errno == ERANGE)
	xwrite(2, "xgetpwuid: Insufficient memory or buffer space.\n", 48);
      else if (errno == EIO)
	xwrite(2, "xgetpwuid: I/O error.\n", 22);
      else if (errno == EINTR)
	xwrite(2, "xgetpwuid: A signal was caught.\n", 32);
      else if (errno == ENFILE || errno == EMFILE)
	xwrite(2, "xgetpwuid: Too many files are open.\n", 36);
      else
	xwrite(2, "xgetpwuid: uid not found.\n", 26);
      if (flags & QOF)
	exit(EXIT_SUCCESS);
    }
  }
  return (ret);
}
