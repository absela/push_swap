# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absela <absela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 06:07:10 by absela            #+#    #+#              #
#    Updated: 2022/12/18 21:13:44 by absela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED			= 	\e[31;5;118m
GREEN		=	\e[38;5;118m
RESET		=	\e[0m
_SUCCESS	=	$(GREEN)MANDATORY$(RESET)
_SUCCESS1	=	$(GREEN)BONUS$(RESET)
REMOV		=	$(RED)REMOVED$(RESET)

all = push_swap

CC=gcc

UTILS=utils.o

BUTILS=utils_bonus.o

CFLAGS=-Wall -Wextra -Werror -g

NAME=push_swap

NM=checker

SRC =	ft_split.c \
		utilsa.c	\
		utilsb.c	\
		utilsc.c	\
		parsing.c \
   		instractions.c	\
		instractions1.c	\
   		instractions2.c	\
   		sortlarg.c	\
		srting.c \
		sort2-5.c \
		utilis5.c \


SRC_BONUS = checker.c \
			checker2.c \
				


OBJ = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

HDR = push_swap_header.h

%.o : %.c $(HDR)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	@$(CC) $(CFLAGS) main.c $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(NAME) is ready!.\n"

bonus : $(OBJS_BONUS) $(OBJ)
	@$(CC) $(CFLAG) $(OBJS_BONUS) $(OBJ) -o ${NM}
	@printf "$(_SUCCESS1) $(NAME) is ready!.\n" 

clean :
	@rm -rf  $(OBJ) $(OBJS_BONUS)
	@printf "$(REMOV) $(NAME) is Removed!.\n"

fclean: clean
	@rm -rf push_swap checker

re: fclean all

