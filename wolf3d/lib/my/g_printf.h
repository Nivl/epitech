/*
** g_printf.h for my_printf in /home/laplan_m/Src/Epitech/Projets/C/my_printf
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sat Nov 20 17:07:26 2010 melvin laplanche
** Last update Mon Dec 13 00:34:38 2010 melvin laplanche
*/

#ifndef G_PRINTF_H_
# define G_PRINTF_H_
# define PF_VALID_CHAR "diouxXeEfFgGaAcsp%Sbn# +-0123456789hljzt.*"
# define PF_CONV_SPE "diouxXeEfFgGaAcsp%Sbn"
typedef struct s_pfqueue
{
  char		   *arg_opt;
  struct s_pfqueue *next;
} t_pfqueue;
typedef struct s_pad
{
  int	size;
  int	force_size;
  char	c;
  int	left;
} t_pad;
char		*pf_repad_hexa_number(char*, char, int);
void		pf_queue_pop(t_pfqueue**);
void		pf_queue_push(t_pfqueue**, char*);
size_t		pf_queue_size(t_pfqueue*);
int		pf_queue_is_empty(t_pfqueue**);
char		*pf_pad_zero(char*, t_pad*);
char		*pf_pad_hexa_number(char*, char);
char		*pf_insert_arg(char*, char*, char*, int);
char		*pf_parser(char*, va_list*);
int		pf_get_precision(char*, va_list*);
void		pf_get_pad_info(char*, va_list*, t_pad*);
char		*pf_get_next_arg(char*, va_list*, int*, char*);
long long int	pf_get_arg_as_int(char*, va_list*);
unsigned long long int	pf_get_arg_as_uint(char*, va_list*);
char		*pf_add_precision(char*, int, char*);
char		*pf_add_percent(char**, int);
char		*pf_add_pad(char *, t_pad*, char *);
char		*pf_add_flag(char *, char*);
#endif /* !G_PRINTF_H_ */
