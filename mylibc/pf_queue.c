/*
** pfqueue.c for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Nov 14 14:54:27 2010 melvin laplanche
** Last update Mon Nov 22 22:45:04 2010 melvin laplanche
*/

#include <stdlib.h>
#include <stdarg.h>
#include <x.h>
#include "my.h"
#include "g_printf.h"

void		pf_queue_pop(t_pfqueue **queue)
{
  t_pfqueue	*elem;

  if (!pf_queue_is_empty(queue))
    {
      elem = *queue;
      *queue = (*queue)->next;
      free(elem->arg_opt);
      free(elem);
    }
  else
    {
      my_putstr("Error: You cannot pop an empty pfqueue.\n");
      exit(EXIT_FAILURE);
    }
}

void		pf_queue_push(t_pfqueue **queue,
			      char      *arg_opt)
{
  t_pfqueue	*elem;
  t_pfqueue	*tmp;

  elem = xmalloc(sizeof(*elem));
  elem->arg_opt = arg_opt;
  elem->next = NULL;
  if (*queue == NULL)
    *queue = elem;
  else
    {
      tmp = *queue;
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
    }
}

size_t		pf_queue_size(t_pfqueue *queue)
{
  t_pfqueue	*tmp;
  size_t	i;

  tmp = queue;
  i = 0;
  while (tmp != NULL)
    {
      tmp = tmp->next;
      ++i;
    }
  return (i);
}

int	pf_queue_is_empty(t_pfqueue **queue)
{
  return (*queue == NULL);
}
