# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greengo <greengo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 10:25:30 by greengo           #+#    #+#              #
#    Updated: 2023/06/25 18:07:28 by greengo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=BraiiiiiiinnnzzzZ
CC=c++
CFLAGS=-Wall -Wextra -Werror -g3 -std=c++98
SRCS_DIR=.
OBJS_DIR=.
INCS_DIR=incs
SRCS=Zombie.cpp newZombie.cpp ramdomChump.cpp main.cpp
SRCS_OBJS= $(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRCS))

$(OBJS_DIR)/%.o:$(SRCS_DIR)/%.cpp
	@mkdir -vp $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INCS_DIR)

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re