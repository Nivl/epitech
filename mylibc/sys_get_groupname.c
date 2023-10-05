/*
** sys_get_groupname.c for sys_get_groupname in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Dec 10 19:23:46 2010 melvin laplanche
** Last update Mon Dec 13 19:03:38 2010 melvin laplanche
*/

#include <stdlib.h>
#include <grp.h>
#include <sys/types.h>
#include <x.h>
#include "my.h"

char	*sys_get_groupname(gid_t	gid,
			   unsigned int	flags)
{
  struct group *gr;

  gr = xgetgrgid(gid, flags);
  if (gr != NULL)
    return (my_strdup(gr->gr_name));
  return (convert_int_to_string(gid));

}
