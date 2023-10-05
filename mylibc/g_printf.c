/*
** my_printf.c for libmy in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov 10 21:23:41 2010 melvin laplanche
** Last update Sat Dec 18 17:55:38 2010 melvin laplanche
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "g_printf.h"

static int	pf_go_to_arg_end(char *str)
{
  int		i;

  i = 0;
  while (str[++i] != 0)
    {
      if (my_char_is_in_array(str[i], PF_CONV_SPE))
	return (i);
      else if (!my_char_is_in_array(str[i], PF_VALID_CHAR))
	return (0);
    }
  return (-1);
}

static void		pf_get_data(char      **str,
				    t_pfqueue **queue)
{
  int			i;
  int			arg_end;
  char			*arg_opt;

  i = -1;
  while ((*str)[++i] != 0)
    {
      if ((*str)[i] == '%')
	{
	  arg_end = pf_go_to_arg_end(*str + i);
	  if (arg_end > 0)
	    {
	      arg_opt = my_strndup(*str + i + 1, arg_end + 1);
	      pf_queue_push(queue, arg_opt);
	      i += arg_end;
	    }
	  else if (arg_end == 0)
	    {
	      pf_queue_push(queue, my_strdup("%"));
	      *str = pf_add_percent(str, i++);
	    }
	  else
	    (*str)[i--] = 0;
	}
    }
}

static void	pf_get_val(char  **val,
			   int	  precision,
			   t_pad *pad_info,
			   char  *arg_opt)
{
  *val = pf_add_precision(*val, precision, arg_opt);
  *val = pf_add_flag(*val, arg_opt);
  *val = pf_add_pad(*val, pad_info, arg_opt);
}

static char		*pf_parse(char      *str,
				  t_pfqueue **queue,
				  va_list   *ap)
{
  t_pfqueue		*tmp;
  t_pad			pad_info;
  int			precision;
  char			*val;
  int			pass;

  pass = 0;
  while (!pf_queue_is_empty(queue))
    {
      precision = pf_get_precision((*queue)->arg_opt, ap);
      pf_get_pad_info((*queue)->arg_opt, ap, &pad_info);
      val = pf_get_next_arg((*queue)->arg_opt, ap, &pass, str);
      if (my_strcmp(val, "%") != 0)
	pf_get_val(&val, precision, &pad_info, (*queue)->arg_opt);
      str = pf_insert_arg(str, (*queue)->arg_opt, val, pass);
      tmp = *queue;
      *queue = (*queue)->next;
      free(tmp->arg_opt);
      free(val);
      free(tmp);
    }
  return (str);
}

char		*pf_parser(char    *str,
			   va_list *ap)
{
  t_pfqueue	*queue;

  queue = NULL;
  pf_get_data(&str, &queue);
  return (pf_parse(str, &queue, ap));
}

