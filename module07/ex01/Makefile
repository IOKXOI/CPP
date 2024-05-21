# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 05:58:48 by greengo           #+#    #+#              #
#    Updated: 2024/05/20 20:26:29 by sydauria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp					\


OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror -I ./includes

CPPFLAGS	=	-std=c++98

NAME		=	templates

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
