/*
** nivl_get_link_target.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Dec  6 22:09:31 2010 melvin laplanche
** Last update Thu Dec 16 16:30:24 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

char		*nivl_get_link_target(const char   *link_name,
				      unsigned int flags)
{
  char		*ret;
  ssize_t	read_s;

  ret = xmalloc(sizeof(*ret) * MY_PATH_MAX + 1);
  read_s = xreadlink(link_name, ret, MY_PATH_MAX, flags);
  if (read_s == -1)
  {
    free(ret);
    ret = NULL;
  }
  else
    ret[read_s] = 0;
  return (ret);
}
