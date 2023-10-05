/*
** nivl_get_next_line.c for libmy in /home/laplan_m/Src/Epitech/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 10 21:15:46 2010 melvin laplanche
** Last update Wed Dec 15 22:10:41 2010 melvin laplanche
*/

#include <unistd.h>
#include <stdlib.h>
#include <x.h>
#include "my.h"

static	char	st_buff[MY_BUFF_SIZE];
static	int	st_curr = -1;
static	int	st_bytes_read = 0;

static char	*get_all_line(char *curr_line,
			      int  curr_size,
			      int  fd)
{
  char	*next_part;
  char	*ret;
  int	i;
  int	next_part_size;

  st_curr = -1;
  next_part = nivl_get_next_line(fd);
  if (next_part == NULL)
      return (curr_line);
  next_part_size = my_strlen(next_part);
  ret = xmalloc(sizeof(*ret) * (curr_size + next_part_size + 1));
  i = -1;
  while (curr_line[++i] != '\0')
    ret[i] = curr_line[i];
  i = -1;
  while (next_part[++i] != '\0')
    ret[i + curr_size] = next_part[i];
  ret[i + curr_size] = 0;
  free(curr_line);
  free(next_part);
  return (ret);
}

char	*nivl_get_next_line(const int fd)
{
  int	i;
  char	*ret;

  if (st_curr < 0 || st_curr >= st_bytes_read + 1)
    {
      st_bytes_read = xread(fd, &st_buff, MY_BUFF_SIZE - 1, QOF);
      if (!st_bytes_read)
	  return (NULL);
      st_curr = 0;
      st_buff[st_bytes_read] = '\0';
    }
  i = -1;
  while (st_buff[st_curr + ++i] != '\n' && st_buff[st_curr + i] != '\0');
  ret = xmalloc(sizeof(*ret) * (i + 1));
  i = -1;
  while (st_buff[st_curr + ++i] != '\n' && st_buff[st_curr + i] != '\0')
    ret[i] = st_buff[st_curr + i];
  ret[i] = '\0';
  st_curr += i;
  if (st_buff[st_curr++] == '\0')
    return (get_all_line(ret, i, fd));
  return (ret);
}
