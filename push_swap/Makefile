# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 13:47:36 by mboyansa          #+#    #+#              #
#    Updated: 2023/08/02 21:54:31 by mboyansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	push_swap.c	\
		utils.c		\
		utils2.c	\
		utils3.c	\
		utils4.c	\
		ft_split.c	\
		sorting.c	\
		rotate.c	\
		swap.c		\
		push.c		\
		rrotate.c	\
		calc.c		\
		str_join.c	\
		radix.c

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FT_PRINTF = ./printf/libftprintf.a
RM = rm -rf
LIBC = ar -rcs

all: $(NAME)

$(NAME): $(SRCS) $(FT_PRINTF)
	@gcc $(CFLAGS) $(SRCS) $(FT_PRINTF) -o $(NAME)
	@echo "-*-*-*- OK -*-*-*-"

$(FT_PRINTF) :
	@make -C ./printf

clean:

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./printf

re: fclean all

.PHONY: all bonus clean fclean re .c.o