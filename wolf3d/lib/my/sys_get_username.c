/*
** sys_get_username.c for my in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Fri Dec 10 19:01:24 2010 melvin laplanche
** Last update Mon Dec 13 19:03:46 2010 melvin laplanche
*/

#include <stdlib.h>
#include <pwd.h>
#include <sys/types.h>
#include <x.h>
#include "my.h"

char	*sys_get_username(uid_t		uid,
			  unsigned int	flags)
{
  struct passwd *user;

  user = xgetpwuid(uid, flags);
  if (user != NULL)
    return (my_strdup(user->pw_name));
  return (convert_int_to_string(uid));
}
