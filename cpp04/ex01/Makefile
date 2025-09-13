NAME = program

BLUE =			\033[0;94m
BROWN =			\033[38;2;184;143;29m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
GREEN =			\033[0;92m

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
INCLUDE = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
CXX = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	@echo "${BLUE} ◎ $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
	@$(CXX) $(CFLAGS) -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
				@${CXX} ${CFLAGS} ${OBJS} -o ${NAME}
				@echo "\n$(GREEN) Created $(NAME) ✓ $(DEF_COLOR)\n"

clean:
		@${RM} ${OBJS}
		@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"

fclean:
		@${RM} ${OBJS} ${NAME}
		@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"

re: fclean all
.PHONY: all clean fclean re 