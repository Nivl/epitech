/*
** get_opts.h for my_ls in /home/laplan_m/Src/Epitech/Projets/C/my_ls
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec  5 16:22:21 2010 melvin laplanche
** Last update Tue Dec 21 22:50:10 2010 melvin laplanche
*/

#include <stdlib.h>
#include "my.h"

static char add_opt_to_list(char*, int*, char, const char*);

char	nivl_get_simple_opts(char	*buff,
			     char	*argv[],
			     const char	*opts)
{
  int	i;
  int	j;
  int	curr_pos;

  buff[0] = 0;
  curr_pos = 0;
  i = 0;
  while (argv[++i] != NULL)
  {
    j = 0;
    if (argv[i][0] == '-')
    {
      while (argv[i][++j] != 0)
      {
	if (add_opt_to_list(buff, &curr_pos, argv[i][j], opts) != 0)
	  return (argv[i][j]);
      }
    }
  }
  return (0);
}

static char	add_opt_to_list(char		*buff,
				int		*curr_pos,
				char		c,
				const char	*opts)
{
  if (!my_char_is_in_array(c, opts))
    return (c);
  if (!my_char_is_in_array(c, buff))
  {
    buff[*curr_pos] = c;
    buff[++(*curr_pos)] = 0;
  }
  return (0);
}
