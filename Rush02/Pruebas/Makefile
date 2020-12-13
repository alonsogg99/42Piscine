# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 16:22:01 by alogarci          #+#    #+#              #
#    Updated: 2020/12/13 17:38:30 by alogarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = main.c ft_errors.c ft_basics.c ft_read_dict.c ft_dict_searching.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra
CLEAN = rm -f
CC = cc

all:	$(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)
clean:
	$(CLEAN) $(NAME)
fclean: 	clean
	$(CLEAN) $(OBJ)
norma:
	norminette -R CheckforbiddenSourceHeader