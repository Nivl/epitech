/*
** my.h for my in /home/laplan_m//afs/rendu/include
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Thu Oct 14 16:50:54 2010 melvin laplanche
** Last update Thu Dec 23 22:11:52 2010 melvin laplanche
*/

#include <stdlib.h>
#include <sys/types.h>
#include <stdarg.h>

#ifndef MY_H_
# define MY_H_
# define MAX(x, y) (((x) < (y)) ? (y) : (x))
# define MIN(x, y) (((x) < (y)) ? (x) : (y))
# define ABS(x) (((x) < (0)) ? (-x) : (x))
# define MY_BUFF_SIZE 8192
# define MY_PATH_MAX 4096
# define FD_STDIN 0
# define FD_STDOUT 1
# define FD_STDERR 2
# define ALPHA_ORDER "`^~<=>| _,;:!?.'\"()[]{}@$*\\&#%+0123456789aAbBcCdDeE" \
  "fFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"
size_t	my_strlen(const char*);
void	my_putchar(char);
int	my_putstr(const char*);
void	my_put_nbr(int);
void	my_putnbr(int);
int	my_isneg(int);
int	my_swap(int*, int*);
int	my_getnbr(const char*);
void	my_sort_int_tab(int*, int);
int	my_power_rec(int, int);
int	my_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char*, const char*);
char	*my_strncpy(char*, const char*, int);
char	*my_revstr(char*);
char	*my_strstr(char*, const char*);
int	my_strcmp(const char*, const char*);
int	my_strncmp(const char*, const char*, int);
char	*my_strupcase(char*);
char	*my_strlowcase(char*);
char	*my_strcapitalize(char*);
int	my_str_isalpha(const char*);
int	my_str_isnum(const char*);
int	my_str_islower(const char*);
int	my_str_isupper(const char*);
int	my_str_isprintable(const char*);
int	my_showstr(char*);
int	my_showmem(char*, int);
char	*my_strcat(char*, const char*);
char	*my_strncat(char*, const char*, int);
char	*my_strlcat(char*, const char*, size_t);
int	my_get_char_pos(char, const char*, int);
int	my_char_is_alpha(char);
void	my_show_to_wordtab(char**, char);
char	**my_str_to_wordtab(const char*);
char	*my_strdup(const char*);
int	my_char_is_num(char);
char	*my_cmemset(char*, int, size_t);
char	*my_strndup(const char*, size_t);
int	my_char_is_in_array(char, const char*);
void	nivl_display_error(char*);
char	*nivl_get_next_line(const int);
char	*convert_base(const char*, const char*, const char*);
int	convert_to_int(const char*, const char*);
char	*convert_from_int(int, const char*);
char	*convert_int_to_string(int);
char	*convert_buint_to_string(unsigned long long int);
char	*convert_base_big_u(const char*, const char*, const char*);
char	*convert_from_buint(unsigned long long int, const char*);
unsigned long long int	convert_to_buint(const char*, const char*);
char	*convert_bint_to_string(long long int);
char	*convert_base_big(const char*, const char*, const char*);
char	*convert_from_bint(long long int, const char*);
long long int	convert_to_bint(const char*, const char*);
int	nivl_count_char_occ(const char*, char);
char	*nivl_pad_left(char*, char, int);
char	*nivl_pad_right(char*, char, int);
char	*my_sprintf_dup(const char*, ...)
  __attribute__((format(printf, 1, 2)));
int	my_snprintf(char*, size_t, const char*, ...)
  __attribute__((format(printf, 3, 4)));
int	my_sprintf(char*, const char*, ...)
  __attribute__((format(printf, 2, 3)));
int	my_fprintf(int, const char*, ...)
  __attribute__((format(printf, 2, 3)));
int	my_printf(const char*, ...)
  __attribute__((format(printf, 1, 2)));
char	*my_vsprintf_dup(const char*, va_list);
int	my_vsnprintf(char*, size_t, const char*, va_list);
int	my_vsprintf(char*, const char*, va_list);
int	my_vfprintf(int, const char*, va_list);
int	my_vprintf(const char*, va_list);
int	*my_imemset(int*, int, size_t);
int	is_big_endian(void);
int	sys_is_link(char*);
int	sys_is_dir(const char*, unsigned int);
char	*nivl_get_link_target(const char*, unsigned int);
char	*my_c_realloc(char*, size_t);
char	*nivl_concat(int, ...);
char	*sys_get_username(uid_t, unsigned int);
char	*sys_get_groupname(gid_t, unsigned int);
int	callback_sort_alpha(void*, void*);
int	callback_sort_date(void*, void*);
int	callback_sort_int(void*, void*);
size_t	my_nblen(int);
void	nivl_die(const char*, ...)
  __attribute__ ((noreturn))
  __attribute__ ((format(printf, 1, 2)));
char	**nivl_str_explode(const char*, const char*);
void	nivl_free_wordtab(char**);
size_t	nivl_wordtab_len(char**);
char	*nivl_clean_space(char*);
char	nivl_get_simple_opts(char*, char**, const char*);
int	nivl_get_next_nonalpha_char_pos(char*);
char	*nivl_str_replace(const char*, const char*, char*);
char	**nivl_wordtab_add(char**, const char*);
char	**nivl_wordtab_copy(char**);
char	*nivl_clean_path(char*, char*);
char	*nivl_str_implode(char**, const char*);
#endif /* !MY_H_ */
