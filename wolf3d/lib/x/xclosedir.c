/*
** xclosedir.c for libx in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec  5 17:40:06 2010 melvin laplanche
** Last update Sun Dec  5 19:46:16 2010 melvin laplanche
*/

#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include "x.h"

void	xclosedir(DIR *dir)
{
  errno = 0;
  if (closedir(dir) == -1)
    {
      xwrite(2, "xclosedir: ", 8);
      if (errno == EBADF)
	xwrite(2, "The directory stream you gave is not valid.\n", 44);
      else
      {
	xwrite(2, "Wow, a weird unknown error occurred while trying ", 49);
	xwrite(2, "to close a directory. This should never happend.\n", 50);
      }
      exit(EXIT_FAILURE);
    }
}
