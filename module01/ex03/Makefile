# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greengo <greengo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 13:22:42 by sydauria          #+#    #+#              #
#    Updated: 2023/10/24 05:31:15 by greengo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=a.out
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS_DIR=.
OBJS_DIR=.
INCS_DIR=includes
SRCS=srcs/HumanA.cpp srcs/HumanB.cpp srcs/Weapon.cpp main.cpp
SRCS_OBJS= $(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRCS))

$(OBJS_DIR)/%.o:$(SRCS_DIR)/%.cpp
	@mkdir -vp $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INCS_DIR)

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(SRCS:.cpp=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
