/*
** my_showmem.c for my_showmem in /home/laplan_m//exo/piscine/Jour_06
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Oct 13 21:12:24 2010 melvin laplanche
** Last update Wed Nov 10 21:17:39 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

void	shmem_ascii_hexa_converter(char, char*);
void	my_showmem_hexa(char*, int);
void	shmem_display_hexa(int, int);
void	my_showmem_addr(int, int);

int	my_showmem(char *str, int size)
{
  int	i;
  int	j;
  int	k;
  int	line;

  i = 0;
  line = 1;
  while (i < size)
    {
      my_showmem_addr(line, 0);
      xwrite(1, ": ", 2);
      my_showmem_hexa(str, i);
      j = i - 1;
      k = -1;
      while (++k < 16 && str[++j] != '\0')
	xwrite(1, (str[j] >= ' ' && str[j] <= '~' ? &str[j] : "."), 1);
      xwrite(1, "\n", 1);
      i += 16;
      ++line;
    }
  return (0);
}

void	shmem_ascii_hexa_converter(char c, char *dest)
{
  char	str[6];

  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = 'd';
  str[4] = 'e';
  str[5] = 'f';
  dest[0] = c / 16 + '0';
  dest[1] = c % 16;
  if (dest[1] < 10)
    dest[1] += '0';
  else
    dest[1] = str[dest[1] - 10];
  dest[2] = '\0';
}

void	my_showmem_hexa(char	*str,
			int	start)
{
  int	i;
  int	j;
  char	num[3];

  j = start;
  i = -1;
  while (++i < 16 && str[j] != '\0')
    {
      shmem_ascii_hexa_converter(str[j++], num);
      xwrite(1, num, 3);
      if (i > 0 && i % 2)
	xwrite(1, " ", 1);
    }
  while (i < 16)
    {
      xwrite(1, "  ", 2);
      if (i % 2)
	xwrite(1, " ", 1);
      ++i;
    }
  xwrite(1, " ", 1);
}

void	shmem_display_hexa(int line, int rest)
{
  char	str[6];
  char	tmp;

  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = 'd';
  str[4] = 'e';
  str[5] = 'f';
  if (rest)
    tmp = line % 16;
  else
    tmp = line;
  if (tmp < 10)
    tmp = tmp + '0';
  else
    tmp = str[tmp - 10];
  xwrite(1, &tmp, 1);
}

void	my_showmem_addr(int line,
			int pos)
{
  int	i;

  if (line / 16)
    {
      my_showmem_addr(line / 16, ++pos);
      shmem_display_hexa(line, 1);
    }
  else
    {
      i = -1;
      while (++i < 6)
	xwrite(1, "0", 1);
      shmem_display_hexa(line, 0);
      xwrite(1, "0", 1);
    }
}
