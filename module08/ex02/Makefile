# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 05:58:48 by greengo           #+#    #+#              #
#    Updated: 2024/06/10 20:40:49 by sydauria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror -I ./includes -g3

CPPFLAGS	=	-std=c++98

NAME		=	MutantStack

all:		$(NAME)

.cpp.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<


$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re
