/*
** display_error.c for BSQ in /home/laplan_m//Src/Epitech/lib/nivl
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Nov  4 23:11:46 2010 melvin laplanche
** Last update Wed Dec 15 22:09:19 2010 melvin laplanche
*/

#include <stdlib.h>
#include <x.h>
#include "my.h"

__attribute__ ((noreturn))
void	nivl_display_error(char *msg)
{
  xwrite(FD_STDERR, msg, my_strlen(msg));
  exit(EXIT_FAILURE);
}
