/*
** sys_is_dir.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec  5 17:19:49 2010 melvin laplanche
** Last update Thu Dec 16 21:13:14 2010 melvin laplanche
*/

#include <stdlib.h>
#include <sys/stat.h>
#include <x.h>
#include "my.h"

int		sys_is_dir(const char	*tg_name,
			   unsigned int flags)
{
  struct stat	st;

  if (xlstat(tg_name, &st, flags) != -1)
    return (S_ISDIR(st.st_mode));
  return (-1);
}
