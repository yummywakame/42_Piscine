# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omeiring <omeiring@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 15:19:57 by omeiring          #+#    #+#              #
#    Updated: 2018/11/11 21:09:00 by omeiring         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= eval_expr

INC_D	= ./incs/
SRC_D	= ./srcs/

HDR		= functions.h
SRCS	= do_op.c eval_expr.c ft_putchar.c ft_putnbr.c ft_strlen.c main.c
OBJS	= do_op.o eval_expr.o ft_putchar.o ft_putnbr.o ft_strlen.o main.o

CFLAGS	= -Wall -Wextra -Werror

all:
	gcc $(CFLAGS) $(addprefix $(SRC_D), $(SRCS)) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
