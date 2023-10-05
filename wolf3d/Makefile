##
## Makefile for  in /home/laplan_m/Src/Epitech/Projets/C/wolf3d
##
## Made by melvin laplanche
## Login   <laplan_m@epitech.net>
##
## Started on  Sun Dec 26 16:02:47 2010 melvin laplanche
## Last update Wed Jan 12 14:12:43 2011 melvin laplanche
##

include Makefile.rules

LDLIBS	+=	-lX11 -lXext -lm
CC	=	gcc
CFLAGS	=	-Wall -Werror -W -Wextra -Winit-self -Wmissing-include-dirs \
		-Wwrite-strings -Wformat=2 -Wundef -Wshadow \
		-Wbad-function-cast -Wnested-externs \
		-Wmissing-prototypes -Wmissing-declarations -Wunknown-pragmas \
		-Wmissing-format-attribute -Wmissing-noreturn -Wpacked \
		-Wredundant-decls -Winline -Wlogical-op -Wswitch-default \
		-Wswitch-enum -Wsync-nand -Wunused-parameter \
		-Wstrict-overflow=1 -pedantic -std=gnu99 \
		-Os -g
LDFLAGS	=	-I include -L lib
SRC	=	main.c \
		display.c \
		wolf_init.c \
		wolf_destroy.c \
		evt_key_released.c \
		evt_key_pressed.c \
		parse_map.c \
		switch_key_state.c \
		get_inital_pos.c \
		main_loop.c \
		move_player.c \
		draw.c \
		calc_xyp.c \
		calc_xypp.c \
		calc_xy1.c \
		calc_k.c \
		calc_vector.c \
		draw_background.c \
		init_keys.c \
		player_is_moving.c \
		check_wall_collisions.c \
		get_opt.c \
		free_opt.c \
		load_texture.c \
		draw_weapon.c \
		init_indic.c \
		move_weapon.c \
		draw_wall_rgb.c \
		draw_wall_tex.c \
		get_wall_size.c \
		init_minimap.c \
		draw_minimap.c
OBJ	=	$(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC) $(LDFLAGS) $(LDLIBS)

$(OBJ): wolf.h

%o: %c
	$(CC) -o $@ -c $< $(LDFLAGS) $(CFLAGS) $(LDLIBS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

mrproper: fclean
	rm -f Makefile.rules

re: fclean all

.PHONY: all clean fclean mrproper re
