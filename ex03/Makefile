# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 15:52:43 by svereten          #+#    #+#              #
#    Updated: 2025/05/02 16:07:44 by svereten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ex03

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP -g

OBJ_DIR = obj

FILES = main \
		bsp	\
		Fixed \
		Point \

OBJS = ${FILES:%=${OBJ_DIR}/%.o}
DEPS = ${FILES:%=${OBJ_DIR}/%.d}

OBJ_DIRS = ${sort ${dir ${OBJS}}}

DEBUG = 0

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} $^ -o $@

${OBJ_DIR}/%.o: %.cpp | ${OBJ_DIRS}
	${CXX} ${CXXFLAGS} -D DEBUG=${DEBUG} -c $< -o $@

${OBJ_DIRS}:
	mkdir -p $@

-include ${DEPS}

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

run: ${NAME}
	./${NAME} ${ARGS}

valgrind: ${NAME}
	valgrind ./${NAME} ${ARGS}

.PHONY: all clean fclean re run valgrind
