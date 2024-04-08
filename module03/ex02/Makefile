CC = c++
LDFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clap

SRCS =	ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

DEPS = ${SRCS:.cpp=.d}

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(NAME)

.cpp.o :
	$(CC) $(LDFLAGS) -c $<

clean :
	rm -rf *.o *.d

fclean : clean
	rm -rf $(NAME)

re : fclean all

-include $(DEPS)

.Phony : all clean fclean re
