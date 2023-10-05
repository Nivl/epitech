/*
** xreaddir.c for libx in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Dec  7 22:35:27 2010 melvin laplanche
** Last update Tue Dec  7 22:50:44 2010 melvin laplanche
*/

#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include "x.h"

struct dirent	*xreaddir(DIR *directory,
			  int qof)
{
  struct dirent	*ret;

  errno = 0;
  if ((ret = readdir(directory)) == NULL && errno != 0)
  {
    if (errno == EBADF)
      xwrite(2, "xreaddir: Invalid directory stream descriptor.\n", 47);
    else
      xwrite(2, "xreaddir: Error, this should NEVER happen.\n", 43);
    if (qof)
      exit(EXIT_FAILURE);
  }
  return ret;
}
