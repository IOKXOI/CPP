# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greengo <greengo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 10:25:30 by greengo           #+#    #+#              #
#    Updated: 2023/10/01 14:08:45 by greengo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=application
CC=c++
CFLAGS=-Wall -Wextra -Werror -g3 -std=c++98
SRCS_DIR=.
OBJS_DIR=.
INCS_DIR=incs
SRCS=main.cpp phonebook.cpp contact.cpp
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