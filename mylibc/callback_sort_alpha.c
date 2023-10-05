/*
** callback_sort_alpha.c for my_ls in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Dec 11 15:23:36 2010 melvin laplanche
** Last update Mon Dec 13 00:51:58 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

static int cmp_char(char, char);
static int check(char*, char*);

int	callback_sort_alpha(void *s1,
			    void *s2)
{
  return (check((char*)s1, (char*)s2));
}

static int	check(char *str1,
		      char *str2)
{
  char	c1;
  char	c2;
  int	i;
  int	j;

  i = -1;
  j = -1;
  while (str1[++i] != 0 && str2[++j] != 0)
  {
    if (str1[i] != str2[j])
    {
      c1 = (str1[i] >= 'A' && str1[i] <= 'Z') ? (str1[i] + 32) : (str1[i]);
      c2 = (str2[j] >= 'A' && str2[j] <= 'Z') ? (str2[j] + 32) : (str2[j]);
      if (c1 == c2)
	return (my_strlen(str2) < my_strlen(str1));
      return (cmp_char(str1[i], str2[j]));
    }
  }
  return (my_strlen(str2) < my_strlen(str1));
}

static int	cmp_char(char c1,
			 char c2)
{
  int	j;
  int	pos;

  j = -1;
  while (ALPHA_ORDER[++j] != c1 && ALPHA_ORDER[j] != 0);
  pos = j;
  j = -1;
  while (ALPHA_ORDER[++j] != c2 && ALPHA_ORDER[j] != 0);
  return (j < pos);
}
