/*
** convert_base.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_printf/lib/my
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Tue Nov 16 16:10:23 2010 melvin laplanche
** Last update Wed Dec 15 22:16:01 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

static void	convert_from_int_process(int, const char*, int, char**);

char	*convert_int_to_string(int nbr)
{
  char	*ret;
  int	i;
  int	neg;

  neg = 0;
  i = 0;
  ret = xmalloc(sizeof(*ret) * 12);
  my_cmemset(ret, 0, sizeof(*ret) * 12);
  if (nbr < 0)
    {
      neg = 1;
      nbr = -nbr;
    }
  else if (nbr == 0)
    ret[i] = '0';
  while (nbr)
    {
      ret[i++] = (nbr % 10) + '0';
      nbr /= 10;
    }
  if (neg)
    ret[i] = '-';
  return (my_revstr(ret));
}

static void	convert_from_int_process(int		nb,
					 const char	*base,
					 int		pos,
					 char		**res)
{
  int		base_t;

  base_t = my_strlen(base);
  if (nb / base_t)
    {
      convert_from_int_process(nb / base_t, base, pos + 1, res);
      *(*res + pos) = base[nb % base_t];
    }
  else
    {
      *res = xmalloc((pos + 2) * sizeof(*res));
      *(*res + pos + 1) = '\0';
      *(*res + pos) = base[nb];
    }
  if (pos == 0)
    my_revstr(*res);
}

char	*convert_from_int(int		nb,
			  const char	*base)
{
  char	*ret;

  ret = NULL;
  convert_from_int_process(nb, base, 0, &ret);
  return (ret);
}

int	convert_to_int(const char *nbr,
		       const char *base)
{
  int	len;
  int	i;
  int	base_t;
  int	ret;

  base_t = my_strlen(base);
  len = my_strlen(nbr) - 1;
  i = -1;
  ret = 0;
  while (nbr[++i] != '\0')
    ret += my_get_char_pos(nbr[i], base, 1) * my_power_rec(base_t, len - i);
  return (ret);
}

char	*convert_base(const char *nbr,
		      const char *base_from,
		      const char *base_to)
{
  int	b_10;
  char	*ret;

  b_10 = convert_to_int(nbr, base_from);
  ret = convert_from_int(b_10, base_to);
  return (ret);
}
