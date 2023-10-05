/*
** xwrite.c for libmy in /home/laplan_m//exo/test
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct 21 15:59:04 2010 melvin laplanche
** Last update Wed Dec 15 21:56:12 2010 melvin laplanche
*/

#include <stdlib.h>
#include <unistd.h>
#include "x.h"

void	xwrite(int	  fd,
	       const char *str,
	       int	  size)
{
  if (write(fd, str, size) < 0)
    {
      write(2, "Write failed to display the string on stdout.\n", 46);
      exit(EXIT_FAILURE);
    }
}
