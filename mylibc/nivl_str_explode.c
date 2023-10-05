/*
** nivl_str_explode.c for my_str_to_wordtab in /home/laplan_m//exo/piscine/Jour_08/wordtab
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct 14 17:22:44 2010 melvin laplanche
** Last update Fri Dec 17 01:10:30 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

static int	count_word(const char*, const char*);
static int	word_len(const char*, const char*, int);
static void	copy_word(char*, const char*, const char*, int);
static void	fill_tab(const char*, const char*, char**, int);

char	**nivl_str_explode(const char *str,
			   const char *delimiters)
{
  char	**ret;
  int	len;

  len = count_word(str, delimiters);
  ret = xmalloc((len + 1) * sizeof(*ret));
  ret[len] = NULL;
  fill_tab(str, delimiters, ret, len);
  return (ret);
}

static int	count_word(const char *str,
			   const char *del)
{
  int		i;
  int		nb_word;
  int		char_found;

  nb_word = 0;
  char_found = 0;
  i = -1;
  while (str[++i] != '\0')
  {
    if (!my_char_is_in_array(str[i], del))
      char_found = 1;
    else if (char_found)
    {
      char_found = 0;
      ++nb_word;
    }
  }
  return (nb_word + (char_found ? 1 : 0));
}

static void	fill_tab(const char *str,
			 const char *del,
			 char **ret,
			 int  size)
{
  int		i;
  int		len;

  str = str;
  i = -1;
  while (++i < size)
  {
    len = word_len(str, del, i);
    ret[i] = xmalloc((len + 1) * sizeof(*ret));
    copy_word(ret[i], str, del, i);
  }
}

static int	word_len(const char *str,
			 const char *del,
			 int  to_find)
{
  int		i;
  int		w_len;

  i = -1;
  w_len = 0;
  while (str[++i] != '\0')
  {
    if (!my_char_is_in_array(str[i], del))
      ++w_len;
    else
    {
      if (w_len && to_find-- == 0)
	return (w_len);
      w_len = 0;
    }
  }
  return (w_len);
}

static void	copy_word(char *dest,
			  const char *src,
			  const char *del,
			  int  to_find)
{
  int		i;
  int		j;
  int		char_found;

  i = -1;
  j = 0;
  char_found = 0;
  while (src[++i] != '\0')
  {
    if (!my_char_is_in_array(src[i], del))
    {
      if (to_find == 0)
	dest[j++] = src[i];
      ++char_found;
    }
    else
    {
      if (char_found)
	to_find--;
      char_found = 0;
    }
  }
  dest[j] = '\0';
}
