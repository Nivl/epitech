##
## Makefile for libx in /home/laplan_m//afs/rendu/lib/x
##
## Made by melvin laplanche
## Login   <laplan_m@epitech.net>
##
## Started on  Mon Oct 18 10:10:49 2010 melvin laplanche
## Last update Sun Dec 19 15:34:03 2010 melvin laplanche
##

include Makefile.rules

HNAME	=	x
CC	=	gcc
CFLAGS	=	-Wall -Werror -Wextra -Winit-self -Wmissing-include-dirs \
		-Wwrite-strings -Wformat=2 -Wundef -Wshadow -pedantic \
		-Wbad-function-cast -Wstrict-prototypes -Wnested-externs \
		-Wmissing-prototypes -Wmissing-declarations -Wunknown-pragmas \
		-Wmissing-format-attribute -Wmissing-noreturn -Wpacked \
		-Wredundant-decls -Winline -Wlogical-op -Wswitch-default \
		-Wswitch-enum -Wsync-nand -Wunused-parameter \
		-Wstrict-overflow=5 \
		-Os
SRC	=	xmalloc.c \
		xwrite.c \
		xopen.c \
		xread.c \
		xclose.c \
		xlstat.c \
		xopendir.c \
		xreadlink.c \
		xclosedir.c \
		xreaddir.c \
		xgetgrgid.c \
		xgetpwuid.c \
		xctime.c
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../$(NAME)
	cp $(HNAME).h ../../include/$(HNAME).h

%o: %c
	$(CC) -o $@ -c $< $(CFLAGS)

$(OBJ): $(HNAME).h

.PHONY: all clean fclean re mrproper

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../lib$(HNAME).a
	rm -f ../lib$(HNAME)-64.a
	rm -f ../../include/$(HNAME).h

mrproper: fclean
	rm -f Makefile.rules

re: fclean all
