##
## Makefile for libmy in /home/laplan_m//afs/rendu/lib/my
##
## Made by melvin laplanche
## Login   <laplan_m@epitech.net>
##
## Started on  Mon Oct 18 10:10:49 2010 melvin laplanche
## Last update Thu Dec 23 17:44:02 2010 melvin laplanche
##

include Makefile.rules

HNAME	=	my
CC	=	gcc
CFLAGS	=	-Wall -Werror -Wextra -Winit-self -Wmissing-include-dirs \
		-Wwrite-strings -Wformat=2 -Wundef -Wshadow \
		-Wbad-function-cast -Wstrict-prototypes -Wnested-externs \
		-Wmissing-prototypes -Wmissing-declarations -Wunknown-pragmas \
		-Wmissing-format-attribute -Wmissing-noreturn -Wpacked \
		-Wredundant-decls -Winline -Wlogical-op -Wswitch-default \
		-Wswitch-enum -Wsync-nand -Wunused-parameter \
		-Wstrict-overflow=1 \
		-Os
LDFLAGS =	-I ../../include -L ../
SRC	=	my_char_is_alpha.c \
		my_char_is_in_array.c \
		my_char_is_num.c \
		my_cmemset.c \
		my_find_prime_sup.c \
		my_get_char_pos.c \
		my_getnbr.c \
		my_isneg.c \
		my_is_prime.c \
		my_power_rec.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putnbr.c \
		my_putstr.c \
		my_revstr.c \
		my_showmem.c \
		my_showstr.c \
		my_show_to_wordtab.c \
		my_sort_int_tab.c \
		my_square_root.c \
		my_strcapitalize.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_strdup.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strlcat.c \
		my_strlen.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strndup.c \
		my_strstr.c \
		my_str_to_wordtab.c \
		my_strupcase.c \
		my_swap.c \
		nivl_convert_tools.c \
		nivl_convert_tools_big.c \
		nivl_convert_tools_unsigned_big.c \
		nivl_display_error.c \
		nivl_get_next_line.c \
		nivl_count_char_occ.c\
		nivl_pad_left.c \
		nivl_pad_right.c \
		my_imemset.c \
		pf_add_flag.c \
		pf_add_pad.c \
		pf_add_percent.c \
		pf_add_precision.c \
		pf_get_arg_as_int.c \
		pf_get_pad_info.c \
		pf_get_next_arg.c \
		pf_get_precision.c \
		pf_insert_arg.c \
		pf_pad_hexa_number.c \
		pf_pad_zero.c \
		pf_queue.c \
		all_printf.c \
		all_vprintf.c \
		pf_repad_hexa_number.c \
		g_printf.c \
		is_big_endian.c \
		sys_is_link.c \
		sys_is_dir.c \
		nivl_get_link_target.c \
		my_c_realloc.c \
		nivl_concat.c \
		sys_get_username.c \
		callback_sort_alpha.c \
		callback_sort_date.c \
		sys_get_groupname.c \
		callback_sort_int.c \
		my_nblen.c \
		nivl_die.c \
		nivl_free_wordtab.c \
		nivl_str_explode.c \
		nivl_str_implode.c \
		nivl_clean_space.c \
		nivl_get_simple_opts.c \
		nivl_wordtab_len.c \
		nivl_get_next_nonalpha_char_pos.c \
		nivl_wordtab_add.c \
		nivl_wordtab_copy.c \
		nivl_str_replace.c \
		nivl_clean_path.c
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../$(NAME)
	cp $(HNAME).h ../../include/$(HNAME).h

%o: %c
	$(CC) -o $@ -c $< $(LDFLAGS) $(CFLAGS) $(LDLIBS)

$(OBJ): $(HNAME).h g_printf.h

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
