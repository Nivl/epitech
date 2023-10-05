/*
** sys_is_link.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec  5 18:48:52 2010 melvin laplanche
** Last update Sun Dec  5 19:56:10 2010 melvin laplanche
*/

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "my.h"

int		sys_is_link(char *tg_name)
{
  char		tmp[5];
  ssize_t	res;

  errno = 0;
  res = readlink(tg_name, tmp, 4);
  return (res != -1 || errno != EINVAL);
}
