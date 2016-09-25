# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhurt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 10:38:05 by lhurt             #+#    #+#              #
#    Updated: 2016/09/21 10:54:02 by lhurt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =	gcc

FLAG =	-Wall -Wextra -Werror -o

NAME =	a.out

LIB =	ar rc $(NAME) && ranlib $(NAME)

SRC =	main.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strlcat.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \

OBJS =	$(SRCS:.c=.o)

all: 	$(NAME)

$(NAME):
		@$(CC) $(FLAG) $(NAME) $(SRC)

clean:
		@/bin/rm -f $(OBJS)

fclean:	clean
		@/bin/rm -f $(NAME)

re: fclean all
