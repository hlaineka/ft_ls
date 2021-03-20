# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helvi <helvi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:00:35 by hlaineka          #+#    #+#              #
#    Updated: 2021/03/20 18:20:02 by helvi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -I$(DIR_INC) -Ilibft/includes
TERMCAPS = -ltermcap

DIR_INC = includes/
DIR_MAIN = ./
DIR_OBJS = objs/

_SRC_MAIN = ft_ls.c ls_print.c ls_sort.c ls_helpers.c ls_dirlist.c ls_print_helpers.c \
ls_dirlist2.c ls_dirlist3.c ls_helpers2.c

SRC_MAIN = $(addprefix $(DIR_MAIN), $(_SRC_MAIN))

SRC = $(SRC_MAIN)

_SRC = $(_SRC_MAIN)

OBJ_FILES = $(_SRC:.c=.o)

OBJS = $(patsubst %, $(DIR_OBJS)%, $(_SRC:.c=.o))

_INC = 	ft_ls.h

INC = $(addprefix $(DIR_INC), $(_INC))

all: libft $(NAME)

$(NAME): $(DIR_OBJS) $(OBJS) libft
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) libft.a

$(DIR_OBJS):
		make -C libft
		cp libft/libft.a .
		mkdir -p $(DIR_OBJS)

$(DIR_OBJS)%.o: $(DIR_MAIN)%.c $(INC)
		$(CC) $(CFLAGS) -o $@ -c $<

libft:
	make -C libft
	cp libft/libft.a .

clean:
	@make -C libft clean
	@rm -f $(OBJS)
	@rm -f libft.a
	@echo library object files removed.

fclean:
	@make -C libft fclean
	@rm -f $(NAME)
	@rm -rf $(DIR_OBJS)
	@echo library .a file removed. Object folder removed.

re: fclean all
