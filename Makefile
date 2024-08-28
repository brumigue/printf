# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 00:11:04 by brumigue          #+#    #+#              #
#    Updated: 2024/08/28 11:24:59 by brumigue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
AR		= ar rcs
RM		= rm -f

SRCS =	pf_base.c ft_printf.c pf_putcsnu.c

OBJS	= ${SRCS:%.c=%.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
