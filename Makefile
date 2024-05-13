# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-oirg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 00:16:42 by zel-oirg          #+#    #+#              #
#    Updated: 2023/12/12 00:16:47 by zel-oirg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

AR = ar rc

CC = cc

CFLAG = -Wall -Wextra -Werror

RM = rm -f

INCLUDES = ft_printf.h

SRCS = \
	./ft_putnbr_base.c	\
	./ft_putchar.c	\
	./ft_putstr.c	\
	./ft_printf.c	\
	./ft_strlen.c	\
	./ft_putnbr_base_ptr.c
	
OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAG) -c $<

$(NAME) : $(OBJS)
	$(AR) $@ $^

clean :
	$(RM)  $(OBJS) 

fclean : clean
	$(RM)  $(NAME)

re : fclean all

ree : all clean

.PHONY : clean
