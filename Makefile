NAME 		= run

SRCS		= main.cpp


OBJS		= $(SRCS:.cpp=.o)

HEADER		= include/websocket.hpp


INC			= -I include/
CC			= clang++

FLAGS		= -std=c++11 -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(SRCS) $(HEADER)
			$(CC) $(FLAGS) $(INC) $(SRCS) -o $(NAME)

%.o:		%.cpp
			$(CC) -g $(FLAGS) $(INC) -c $< -o $@

debug: all

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re