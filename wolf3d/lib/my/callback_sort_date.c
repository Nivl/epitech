/*
** callback_sort_date.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 12 15:11:58 2010 melvin laplanche
** Last update Mon Dec 13 00:48:36 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

static int check_month(char*, char*);

int	callback_sort_date(void *s1,
			   void *s2)
{
  int	check;
  char	*str1;
  char	*str2;

  str1 = (char*)s1;
  str2 = (char*)s2;
  if ((check = my_strncmp(str1 + 20, str2 + 20, 4)) != 0)
    return (check == -1);
  if ((check = check_month(str1 + 4, str2 + 4)) != 0)
    return (check == -1);
  if ((check = my_strncmp(str1 + 8, str2 + 8, 2)) != 0)
    return (check == -1);
  return (my_strncmp(str1 + 11, str2 + 11, 8) == -1);
}

static int	check_month(char *m1,
			    char *m2)
{
  char	month[12][4];
  int	pos;
  int	j;

  my_strcpy(month[0], "Jan");
  my_strcpy(month[1], "Feb");
  my_strcpy(month[2], "Mar");
  my_strcpy(month[3], "Apr");
  my_strcpy(month[4], "May");
  my_strcpy(month[5], "Jun");
  my_strcpy(month[6], "Jul");
  my_strcpy(month[7], "Aug");
  my_strcpy(month[8], "Sep");
  my_strcpy(month[9], "Oct");
  my_strcpy(month[10], "Nov");
  my_strcpy(month[11], "Dec");
  j = -1;
  while (my_strncmp(month[++j], m1, 3) != 0);
  pos = j;
  j = -1;
  while (my_strncmp(month[++j], m2, 3) != 0);
  return ((pos == j) ? (0) : (pos < j));
}
