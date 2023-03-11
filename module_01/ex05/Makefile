# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awallet <awallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 17:29:53 by awallet           #+#    #+#              #
#    Updated: 2023/03/11 16:53:25 by awallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Default build version called with make rule = release
build		:= debug

#Compilation of the mandatory part
NAME		= harl

#Buildings objects
DIR			=
FILES		= main.cpp Harl.cpp
SRC			+= $(addprefix ${DIR}, ${FILES})

OBJ			= ${SRC:.cpp=.o}
DEP			= ${OBJ:.o=.d}

CC			= c++ -std=c++98
RM			= rm -rf

#Conditionnal flags depending on the building version
cflags.rls		:= -Wall -Wextra -Werror -MMD -MP
cflags.gdb		:= -g3 #-fstandalone-debug
cflags.san		:= -g3 -fsanitize=address #-fstandalone-debug
cflags.debug    := -g3 -D DEBUG=true -fsanitize=address
CFLAGS			= ${cflags.rls} ${cflags.${build}}
export			CFLAGS

%.o : %.cpp
		${CC} ${CFLAGS} -c $< -o $@

#Mandatory rules
all:    ${NAME}

${NAME}:${OBJ}
		${CC} ${CFLAGS} ${OBJ} -o ${NAME}


#Cleaning rules
clean:
		${RM} ${OBJ} ${DEP}

fclean: clean
		${RM} ${NAME}

re:     fclean
		${MAKE} all

#Dependencies list
-include ${DEP}

.PHONY: all clean fclean re bonus