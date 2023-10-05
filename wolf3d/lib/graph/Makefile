##
## Makefile for libgraph in /home/laplan_m/Src/Epitech/Projets/C/fdf/lib/graph
##
## Made by melvin laplanche
## Login   <laplan_m@epitech.net>
##
## Started on  Mon Nov 29 21:58:53 2010 melvin laplanche
## Last update Fri Dec 31 03:16:44 2010 melvin laplanche
##

include Makefile.rules

HNAME	=	graph
CC	=	gcc
CFLAGS	=	-Wall -Werror -Wextra -Winit-self -Wmissing-include-dirs \
		-Wwrite-strings -Wformat=2 -Wundef -Wshadow \
		-Wbad-function-cast -Wstrict-prototypes -Wnested-externs \
		-Wmissing-prototypes -Wmissing-declarations -Wunknown-pragmas \
		-Wmissing-format-attribute -Wmissing-noreturn -Wpacked \
		-Wredundant-decls -Winline -Wlogical-op -Wswitch-default \
		-Wswitch-enum -Wsync-nand -Wunused-parameter \
		-Wstrict-overflow=1 -pedantic -std=c99 \
		-Os
CFLAGS	=	-W -Wall -Werror
LDFLAGS	=	-I ../../include -L ../
LDLIBS	+=	-lXext -lX11
SRC	=	gf_draw_px.c \
		gf_draw_line.c \
		gf_get_new_point.c \
		gf_get_new_3d_point.c \
		gf_free_mlx.c \
		color.c \
		gf_get_iso_point.c \
		gf_get_new_color.c \
		gf_init_mlx.c \
		gf_new_image.c \
		gf_get_data_and_index.c \
		gf_copy_px.c
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../$(NAME)
	cp $(HNAME).h ../../include/$(HNAME).h

%o: %c
	$(CC) -o $@ -c $< $(LDFLAGS) $(CFLAGS) $(LDLIBS)

$(OBJ): graph.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../lib$(HNAME).a
	rm -f ../lib$(HNAME)-64.a
	rm -f ../../include/$(HNAME).h

mrproper: fclean
	rm -f Makefile.rules

re: fclean all

.PHONY: clean fclean all re mrproper
