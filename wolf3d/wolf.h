/*
** wolf.h for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
**
** Made by melvin laplanche
** Login   <laplan_m@epitech.net>
**
** Started on  Sun Dec 26 16:53:10 2010 melvin laplanche
** Last update Wed Jan 12 15:37:06 2011 melvin laplanche
*/

#ifndef WOLF_H_
# define WOLF_H_
# define WIN_WIDTH	800
# define WIN_HEIGHT	600
# define SPEED		(WIN_WIDTH * WIN_HEIGHT) / 9600000.f
# define SPEED_ROT	SPEED
# define SPEED_WEAP	SPEED * 20
# define MINIMAP_RAT	4

typedef struct s_target
{
  float	x;
  float	y;
  float	k;
} t_target;

typedef struct s_keys
{
  int	w;
  int	s;
  int	a;
  int	d;
  int	left;
  int	right;
} t_keys;

typedef struct s_pos
{
  float	x;
  float	y;
} t_pos;

typedef struct	s_textures
{
  void		**walls;
  t_isize	*walls_size;
  void		*weap0;
  t_isize	weap0_size;
} t_textures;

typedef struct s_opts
{
  int	tex_nb_wall;
  int	use_minimap;
  char	*texture;
} t_opts;

typedef struct s_indicator
{
  int	speed_mult;
  float	weap_pos;
  float	weap_mult;
} t_indicator;

typedef struct s_minimap
{
  int		px_size;
  void*		img;
  t_isize	size;
  t_pos		last_user_pos;
} t_minimap;

typedef struct s_core
{
  t_mlx		mlx;
  t_keys	keys;
  int		**map;
  t_pos		map_size;
  t_pos		xy0;
  t_minimap	minimap;
  float		angle;
  t_opts	opts;
  t_textures	textures;
  t_indicator	indic;
} t_core;

t_pos		get_inital_pos(int**);
int		display(t_core*);
t_core		*wolf_init(int, char**);
void		wolf_destroy(t_core*);
int		evt_key_released(int, t_core*);
int		evt_key_pressed(int, t_core*);
int		**parse_map(int, char**, t_core*);
void		switch_key_state(int, t_core*);
int		main_loop(t_core*, int);
void		move_player(t_core*);
t_pos		calc_xy1(int);
void		draw(t_core*, int);
t_pos		calc_xyp(t_core*, t_pos*);
t_pos		calc_xypp(t_core*, t_pos*);
t_pos		calc_vector(t_core*, t_pos*);
t_target	calc_k(t_core*, t_pos*);
void		draw_background(t_core*, int, int, int);
void		init_keys(t_core*);
int		player_is_moving(t_core*);
int		check_wall_collisions_x(t_core*, float, float);
int		check_wall_collisions_y(t_core*, float, float);
void		get_opt(int, char**, t_core*);
void		free_opt(t_core*);
void		load_texture(t_core*);
void		draw_weapon(t_core*);
void		init_indic(t_core*);
void		move_weapon(t_core*);
void		draw_wall_tex(t_core*, t_target*, t_pos*, int);
void		draw_wall_rgb(t_core*, t_target*, t_pos*, int);
float		get_wall_size(t_target*);
void		init_minimap(t_core*);
void		draw_minimap(t_core*);
#endif /* !WOLF_H_ */
