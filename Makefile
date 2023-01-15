# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absela <absela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 06:07:10 by absela            #+#    #+#              #
#    Updated: 2023/01/15 10:58:15 by absela           ###   ########.fr        #
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

SRC =	ft_split.c \
		utilsa.c	\
		utilsc.c	\
		parsing.c \
   		instractions.c	\
		instractions1.c	\
   		instractions2.c	\
   		largsort.c	\
		srting.c \
		low_sort.c \
		utilis5.c \
		# main.c \


SRC_BONUS = checker.c \
			checker2.c \
				


OBJ = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

HDR = push_swap_header.h

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< 

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) main.c $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(NAME) is ready!.\n"

bonus : $(OBJS_BONUS) $(OBJ)
	$(CC) $(CFLAG) $(OBJS_BONUS) $(OBJ) -o ${NM}

clean :
	@rm -rf  $(OBJ) $(OBJS_BONUS)
	@printf "$(REMOV) $(NAME) is Removed!.\n"

fclean: clean
	@rm -rf push_swap checker

re: fclean all

