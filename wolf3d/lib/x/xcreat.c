/*
** xcreat.c for libx in /home/laplan_m//Src/Epitech/Projets/C/BSQ
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Nov  5 15:07:23 2010 melvin laplanche
** Last update Mon Dec 13 14:55:41 2010 melvin laplanche
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "x.h"

int	xcreat(char	    *pathname,
	       mode_t	    mode,
	       unsigned int flags)
{
  return (xopen(pathname, O_WRONLY | O_CREAT | O_TRUNC, mode, flags));
}
