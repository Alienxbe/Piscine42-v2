# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maykman <maykman@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 13:36:44 by maykman           #+#    #+#              #
#    Updated: 2022/02/22 14:28:47 by maykman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

SRCS	=	ft_putchar.c \
			ft_swap.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_strcmp.c
OBJS	=	$(addprefix srcs/, ${SRCS:.c=.o})

%.o:	%.c
	${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	ar -rcs $@ $^

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re