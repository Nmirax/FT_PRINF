# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 15:43:25 by abakhaev          #+#    #+#              #
#    Updated: 2023/11/20 17:55:33 by abakhaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = src/ft_printchar.c \
	  src/ft_printf.c \
      src/ft_printdecnbr.c \
      src/ft_printhex.c \
      src/ft_printhexlowcase.c \
      src/ft_printhexmaj.c \
      src/ft_printinteger.c \
      src/ft_printpercent.c \
      src/ft_printptr.c \
      src/ft_printstr.c \
      src/ft_printunsigned.c \
      src/ft_printuphex.c \
      src/ft_putnbr_dec_recursive.c \
      src/ft_putnbr_hex_recursive.c \
      src/ft_putnbr_recursive.c

OBJS = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re