# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 10:47:14 by lpolizzi          #+#    #+#              #
#    Updated: 2024/10/01 16:39:33 by lpolizzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCDIR = src
OBJDIR = objs
INCDIR = includes
BINDIR = bin
COMP = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = src/main.c\
	src/string_utils.c\
	src/print_result.c\
	src/parse_dict.c

OBJS = $(patsubst ${SRCDIR}/%.c, ${OBJDIR}/%.o, ${SRCS})

all: ${NAME}

${NAME}: ${OBJS}
	@mkdir -p ${BINDIR}
	${COMP} ${OBJS} -o ${BINDIR}/${NAME}
	@echo "Compilation done. Executable created at: ./${BINDIR}/${NAME}"

${OBJDIR}/%.o: ${SRCDIR}/%.c
	@mkdir -p ${OBJDIR}
	${COMP} ${CFLAGS} -I ${INCDIR} -c $< -o $@
	@echo "Compiled: $< -> $@"

clean:
	@rm -rf ${OBJDIR}
	@echo "Cleaned object files."

fclean: clean
	@rm -rf ${BINDIR}
	@echo "Full clean done. Object files and binary deleted."

re: fclean all

.PHONY: all clean fclean re
