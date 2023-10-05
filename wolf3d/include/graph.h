/*
** graph.h for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf/lib/graph
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Mon Nov 29 22:11:54 2010 melvin laplanche
** Last update Tue Jan 11 22:59:30 2011 melvin laplanche
*/

#ifndef GRAPH_H_
# define GRAPH_H_
typedef struct s_mlx
{
  void	*ptr;
  void	*win;
  void	*img;
} t_mlx;

typedef struct s_rgb
{
  int	r;
  int	g;
  int	b;
} t_rgb;

typedef struct s_point3d
{
  int	x;
  int	y;
  int	z;
} t_point3d;

typedef struct s_point
{
  int	x;
  int	y;
} t_point;

typedef struct s_isize
{
  int	w;
  int	h;
} t_isize;

typedef struct s_px
{
  t_point	point;
  t_rgb		color;
} t_px;

typedef enum e_gf_keycode
{
  gf_key_escape = 65307,
  gf_key_tab = 65289,
  gf_key_up = 65362,
  gf_key_down = 65364,
  gf_key_left = 65361,
  gf_key_right = 65363,
  gf_key_a = 97,
  gf_key_b = 98,
  gf_key_c = 99,
  gf_key_d = 100,
  gf_key_e = 101,
  gf_key_f = 102,
  gf_key_g = 103,
  gf_key_h = 104,
  gf_key_i = 105,
  gf_key_j = 106,
  gf_key_k = 107,
  gf_key_l = 108,
  gf_key_m = 109,
  gf_key_n = 110,
  gf_key_o = 111,
  gf_key_p = 112,
  gf_key_q = 113,
  gf_key_r = 114,
  gf_key_s = 115,
  gf_key_t = 116,
  gf_key_u = 117,
  gf_key_v = 118,
  gf_key_w = 119,
  gf_key_x = 120,
  gf_key_y = 121,
  gf_key_z = 122,
  gf_key_space = 32,
  gf_key_0 = 48,
  gf_key_1 = 49,
  gf_key_2 = 50,
  gf_key_3 = 51,
  gf_key_4 = 52,
  gf_key_5 = 53,
  gf_key_6 = 54,
  gf_key_7 = 55,
  gf_key_8 = 56,
  gf_key_9 = 57,
  gf_return = 65421,
  gf_key_np0 = 65438,
  gf_key_np1 = 65436,
  gf_key_np2 = 65433,
  gf_key_np3 = 65435,
  gf_key_np4 = 65430,
  gf_key_np5 = 65437,
  gf_key_np6 = 65432,
  gf_key_np7 = 65429,
  gf_key_np8 = 65431,
  gf_key_np9 = 65434,
  gf_npreturn = 65293
} e_gf_key;

t_point3d	gf_get_new_3d_point(int, int, int);
t_point		gf_get_new_point(int, int);
t_point		gf_get_iso_point(int, int, int, int);
void		*gf_new_image(t_mlx*, int, int);
t_mlx		gf_init_mlx(int, int, const char*);
void		gf_free_mlx(t_mlx*);
void		gf_draw_line(void*, t_point*, t_point*, t_rgb);
void		gf_draw_px(void*, t_px*);
t_rgb		gf_get_new_color(int, int, int);
t_rgb		gf_white(void);
t_rgb		gf_black(void);
t_rgb		gf_red(void);
t_rgb		gf_green(void);
t_rgb		gf_blue(void);
void		gf_get_data_and_index(void*, t_point*, char**, int*);
void		gf_copy_px(void*, t_point*, void*, t_point*);
#endif /* !GRAPH_H_ */
