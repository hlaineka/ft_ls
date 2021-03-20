# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helvi <helvi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:00:35 by hlaineka          #+#    #+#              #
#    Updated: 2021/03/20 18:41:03 by helvi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -I$(INC_DIR)
TERMCAPS = -ltermcap

INC_DIR = includes/
DIR_OBJS = objs/
DIR_LIBFT = libft/
DIR_PRINTF = printf/

_SRC_LIBFT = 	ft_addstr.c \
				ft_atoi.c \
				ft_bzero.c \
				ft_char_str_join.c \
				ft_define_length.c \
				ft_dynamic_string.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_is_whitespace.c \
				ft_itoa_base.c \
				ft_itoa.c \
				ft_itoa_float.c \
				ft_itoa_hexa.c \
				ft_itoa_uint.c \
				ft_lstaddafter.c \
				ft_lstadd.c \
				ft_lstaddtoend.c \
				ft_lstdel.c \
				ft_lstdellast.c \
				ft_lstdelone.c \
				ft_lstend.c \
				ft_lstiter.c \
				ft_lst_length.c \
				ft_lstmap.c \
				ft_lst_merge_sort.c \
				ft_lstnew.c \
				ft_lstnewtoend.c \
				ft_lst_reverse.c \
				ft_lst_sorted_merge.c \
				ft_lst_split.c \
				ft_lstsrc.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_strcat.c \
				ft_str_char_join.c \
				ft_strchr.c \
				ft_strclr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin3.c \
				ft_strjoin.c \
				ft_strjoin_frees1.c \
				ft_strjoin_frees2.c \
				ft_strlast.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strmap.c	\
				ft_strmapi.c \
				ft_strncat.c \
				ft_strnchr.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strnstr.c \
				ft_strpaste.c \
				ft_strpaste_digits.c \
				ft_strpaste_end.c \
				ft_strrchr.c \
				ft_str_realloc.c \
				ft_strset.c \
				ft_strsplit.c \
				ft_strstr.c \
				ft_strsub.c \
				ft_strsub_freestr.c \
				ft_strtrim.c \
				ft_tolower.c \
				ft_toupper.c \
				get_next_line.c \
				print_error_and_exit.c \
				print_error.c

_SRC_PRINTF = 	float_trim_and_round.c \
				ft_printf.c \
				helper_functions.c \
				print_c.c \
				print_d.c \
				print_f.c \
				print_o.c \
				print_p.c \
				print_s.c \
				print_u.c \
				print_x.c \
				set_command_values.c \
				va_arg_reader_functions.c

SRC_LIBFT = $(addprefix $(DIR_LIBFT), $(_SRC_LIBFT))
SRC_PRINTF = $(addprefix $(DIR_PRINTF), $(_SRC_PRINTF))

SRC = $(SRC_LIBFT) $(SRC_PRINTF)

_SRC = $(_SRC_LIBFT) $(_SRC_PRINTF) 

OBJ_FILES = $(_SRC:.c=.o)

OBJS = $(patsubst %, $(DIR_OBJS)%, $(_SRC:.c=.o))
DEBUG_OBJS = $(patsubst %, $(DIR_OBJS)%, $(_DEBUG_SRC:.c=.o))

_INC = 	libft.h \
		ft_printf.h \

INC = $(addprefix $(INC_DIR), $(_INC))

all: $(NAME)

$(NAME): $(DIR_OBJS) $(OBJS)
		ar rc $(NAME) $(OBJS) $(INC)
		ranlib $(NAME)

$(DIR_OBJS):
		mkdir -p $(DIR_OBJS)

$(DIR_OBJS)%.o: $(DIR_LIBFT)%.c
		$(CC) $(CFLAGS) -o $@ -c $<

$(DIR_OBJS)%.o: $(DIR_PRINTF)%.c
		$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo library object files removed.

fclean:
	@rm -f $(NAME)
	@rm -rf $(OBJS_DIR)
	@echo library .a file removed. Object folder removed.

re: fclean all
