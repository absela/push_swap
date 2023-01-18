# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absela <absela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 06:07:10 by absela            #+#    #+#              #
#    Updated: 2023/01/16 21:30:15 by absela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED			= 	\e[31;5;118m
GREEN		=	\e[38;5;118m
RESET		=	\e[0m
_SUCCESS	=	$(GREEN)MANDATORY$(RESET)
_SUCCESS1	=	$(GREEN)BONUS$(RESET)
REMOV		=	$(RED)REMOVED$(RESET)

all = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap

NM = checker

SRC =	my_split.c \
		utilis1.c	\
		utilis2.c	\
		parsing.c \
   		instractions.c	\
		instractions1.c	\
   		instractions2.c	\
   		largsort.c	\
		srting.c \
		low_sort.c \
		utilis3.c \
		main.c \


SRC_BONUS = bonus/checker.c \
			bonus/checker2.c \
			bonus/parsing_bonus.c \
			bonus/utilis_bonus.c \
			bonus/instractions_b.c	\
			bonus/instractions1_b.c	\
			bonus/instractions2_b.c	\
			bonus/utilsa_bonus.c \
			bonus/my_split_bonus.c \
			bonus/utilsbb.c \
				


OBJ = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

HDR = push_swap_header.h

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(NAME) is ready!.\n"

bonus : $(OBJS_BONUS) 
	$(CC) $(CFLAG) $(OBJS_BONUS)  -o ${NM}

clean :
	rm -rf  $(OBJ) $(OBJS_BONUS)
	@printf "$(REMOV) $(NAME) is Removed!.\n"

fclean: clean
	@rm -rf push_swap checker

re: fclean all

