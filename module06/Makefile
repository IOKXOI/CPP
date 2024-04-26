# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 05:58:48 by greengo           #+#    #+#              #
#    Updated: 2024/04/26 20:59:33 by sydauria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp					\
				srcs/ScalarConverter.cpp	\
				srcs/boolFunctionParsing.cpp\

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror -I./includes

CPPFLAGS	=	-std=c++98

NAME		=	Converter

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
