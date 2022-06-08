# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absela <absela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 06:07:10 by absela            #+#    #+#              #
#    Updated: 2022/06/08 06:22:38 by absela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: push_swap

CC=gcc

UTILS=utils.o

BUTILS=utils_bonus.o

CFLAGS=-Wall -Wextra -Werror -g

NAME=push_swap

NM=checker

SRC := ft_split.c \
	   utilsa.c	\
	   utilsb.c	\
	   utilsc.c	\
	   parsing.c \
	   instractions1.c	\
   		instractions.c	\
   		sortlarg.c	\
		srting.c \
		sort2-5.c \
		
SRC_BONUS := checker.c \

OBJ := $(SRC:.c=.o)
OBJS_BONUS := $(SRC_BONUS:.c=.o)

HDR := push_swap_header.h

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) main.c $(OBJ) -o $(NAME)

bonus : $(OBJS_BONUS) $(OBJ)
		$(CC) $(CFLAG) $(OBJS_BONUS) $(OBJ) -o ${NM} 

clean :
	rm -rf  $(OBJ) $(OBJS_BONUS)

fclean: clean
	rm -rf push_swap checker

re: fclean all

