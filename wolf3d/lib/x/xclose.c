/*
** xclose.c for libx in /home/laplan_m//Src/Epitech/Projets/C/BSQ
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Nov  5 14:31:05 2010 melvin laplanche
** Last update Sun Dec  5 19:45:33 2010 melvin laplanche
*/

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "x.h"

void	xclose(int fd)
{
  errno = 0;
  if (close(fd) == -1)
    {
      xwrite(2, "xclose: ", 8);
      if (errno == EBADF)
	xwrite(2, "The file descriptor you gave is not valid.\n", 43);
      else if (errno == EINTR)
	xwrite(2, "The call was interrupted by a signal.\n", 38);
      else
	xwrite(2, "An I/O error occured.\n", 22);
      exit(EXIT_FAILURE);
    }
}
