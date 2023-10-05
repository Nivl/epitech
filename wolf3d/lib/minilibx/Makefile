##
## Makefile for minilibx in /home/laplan_m/Src/Epitech/Projets/C/fdf/lib/minilibx
##
## Made by melvin laplanche
## Login   <laplan_m@epitech.net>
##
## Started on  Mon Nov 29 14:56:39 2010 melvin laplanche
## Last update Thu Dec 30 18:06:45 2010 melvin laplanche
##

include Makefile.rules

HNAME	=	mlx
CC	=	gcc
CFLAGS	=	-O3
LDFLAGS	=	-I /usr/X11R6/include
SRC	=	mlx_init.c \
		mlx_new_window.c \
		mlx_pixel_put.c \
		mlx_loop.c \
		mlx_mouse_hook.c \
		mlx_key_hook.c \
		mlx_expose_hook.c \
		mlx_loop_hook.c \
		mlx_int_anti_resize_win.c \
		mlx_int_do_nothing.c \
		mlx_int_wait_first_expose.c \
		mlx_int_get_visual.c \
		mlx_flush_event.c \
		mlx_string_put.c \
		mlx_new_image.c \
		mlx_get_data_addr.c \
		mlx_put_image_to_window.c \
		mlx_get_color_value.c \
		mlx_clear_window.c \
		mlx_xpm.c \
		mlx_int_str_to_wordtab.c \
		mlx_destroy_window.c \
		mlx_int_param_event.c \
		mlx_int_set_win_event_mask.c \
		mlx_hook.c \
		mlx_rgb.c \
		strlcpy.c
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME)	: $(OBJ)
	ar -r $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../$(NAME)
	cp $(HNAME).h ../../include/$(HNAME).h

%o: %c
	$(CC) -o $@ -c $< $(LDFLAGS) $(CFLAGS)

$(OBJ): $(HNAME).h

.PHONY: clean fclean all re mrproper

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../lib$(HNAME).a
	rm -f ../lib$(HNAME)-64.a
	rm -f ../../include/$(HNAME).h

mrproper:	fclean
	rm -f Makefile.rules

re: fclean all
