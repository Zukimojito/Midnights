##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile that compile your libmy
##


SRC =		my_revstr.c			\
		my_str_isnum.c			\
		my_str_isnumf.c			\
		my_compute_power_rec.c		\
		my_showmem.c			\
		my_str_isprintable.c		\
		my_compute_square_root.c	\
		my_showstr.c			\
		my_str_isupper.c		\
		my_find_prime_sup.c		\
		my_sort_int_array.c		\
		my_strlen.c			\
		my_getnbr.c			\
		my_nbrlen.c			\
		my_strcapitalize.c		\
		my_strlowcase.c			\
		my_strcat.c			\
		my_strncat.c			\
		my_isneg.c			\
		my_strcmp.c			\
		my_strncmp.c			\
		my_is_prime.c			\
		my_strcpy.c			\
		my_strncpy.c			\
		my_putchar.c			\
		my_strdup.c			\
		my_strstr.c			\
		my_put_nbr.c			\
		my_put_nbr_unsign.c		\
		my_str_isalpha.c		\
		my_strupcase.c			\
		my_putstr.c			\
		my_errorstr.c			\
		my_inputstr.c			\
		my_str_islower.c		\
		my_swap.c			\
		my_strstr.c			\
		my_show_word_array.c		\
		my_str_to_word_array.c		\
		my_str_to_word_array_delim.c	\
		my_memset.c			\
		skip_sign.c			\
		sign_nbr.c			\
		convert_base.c			\
		convert_basi.c			\
		my_getnbr_base.c		\
		my_putnbr_base.c		\
		my_printf.c			\
		my_wrapbase.c			\
		my_wrapbaseox.c			\
		my_wrap.c			\
		my_alphanum.c			\
		my_show_int_array.c		\
		my_show_int_2d_array.c		\
		my_nbrtostr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a *.o
	cp libmy.a ../
	mkdir -p ../../include
	cp my.h ../../include/
	cp my_macro.h ../../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f libmy.a
	rm -f ../libmy.a

re:	fclean all
