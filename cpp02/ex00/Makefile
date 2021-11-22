BLUE = 		\033[0;34m
GREEN = 	\033[0;32m
LIGHTBLUE = \033[1;34m
RED = 		\033[0;31m
YELLOW = 	\033[1;33m
ORANGE = 	\033[0;33m
MAGENTA = 	\033[0;35m
RESET = 	\033[0m

SRCS		= $(wildcard Fixed.cpp main.cpp)

OBJS 		= ${SRCS:.cpp=.o}

NAME		= Fixed

HEADERS		= -I ./

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
			@clang++ $(FLAG) -c -o $@ $<

${NAME}:	${OBJS}
			@printf "\n$(BLUE)"
			@printf "$(BLUE)Compiling files..."
			@clang++ ${FLAGS} ${OBJS} -o ${NAME}
			@printf "$(GREEN)[${NAME} done][✔]$(RESET)\n"
			@printf "\n"

all:		${NAME}

clean:
			@printf "\n"
			@printf "$(RED)Erase files '.o'\n"
			@rm -rf $(OBJS)
			@printf "\033[0m\n"

fclean:
			@printf "\n"
			@printf "$(RED)Erase files '.o'\n"
			@rm -rf $(OBJS)
			@printf "$(RED)Delete executable file and libft\n"
			@rm -rf $(NAME)
			@printf "$(RESET)\n"

re:			fclean all

.PHONY:		clean fclean re all