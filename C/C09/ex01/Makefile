# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 14:02:26 by lpolizzi          #+#    #+#              #
#    Updated: 2024/09/24 15:42:20 by lpolizzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP = gcc
CFLAGS += -Wall -Wextra -Werror
LIB = libft.a
SRCDIR = srcs
INCDIR = includes

SRCS = ${SRCDIR}/ft_putchar.c\
	${SRCDIR}/ft_swap.c\
	${SRCDIR}/ft_putstr.c\
	${SRCDIR}/ft_strlen.c\
	${SRCDIR}/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

all: ${LIB}

${LIB}: ${OBJS}
		ar rcs ${LIB} ${OBJS}

.c.o:
		${COMP} ${CFLAGS} -I ${INCDIR} -c $< -o $@

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${LIB}

re:		fclean all

.PHONY: all clean fclean re
