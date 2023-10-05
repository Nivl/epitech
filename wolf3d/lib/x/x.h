/*
** x.h for libx in /home/laplan_m//Src/Epitech/lib/x
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Wed Nov  3 22:29:30 2010 melvin laplanche
** Last update Thu Dec 16 21:14:34 2010 melvin laplanche
*/

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

#ifndef X_H_
# define X_H_
# define NIL 0
# define QOF 0x1
# define COF 0x02
# define QUIET 0x04
void*	xmalloc(size_t);
void	xwrite(int, const char*, int);
int	xopen(char*, int, mode_t, unsigned int);
ssize_t	xread(int, void*, size_t, unsigned int);
int	xcreat(char*, mode_t, unsigned int);
void	xclose(int);
void	xclosedir(DIR*);
int	xlstat(const char*, struct stat*, unsigned int);
DIR*	xopendir(char*, unsigned int);
ssize_t	xreadlink(const char*, char*, size_t , unsigned int);
struct dirent	*xreaddir(DIR*, int);
struct group	*xgetgrgid(gid_t, unsigned int);
struct passwd	*xgetpwuid(uid_t, unsigned int);
char		*xctime(const time_t*);
#endif /* !X_H_ */
