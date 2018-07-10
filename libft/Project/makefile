# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngumede <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/25 09:00:11 by ngumede           #+#    #+#              #
#    Updated: 2018/06/08 16:55:12 by ngumede          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

cc = gcc

CFLAGS = -Wall -Wextra -Werror

PART_1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memcmp.c \
		 ft_memccpy.c ft_memchr.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		 ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strcmp.c \
		 ft_strncmp.c ft_strstr.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
		 ft_isdigit.c ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c \
		 ft_strchr.c ft_strrchr.c ft_strnstr.c

PART_2 = ft_putendl.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putendl_fd.c \
		 ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strequ.c ft_strnequ.c \
		 ft_memalloc.c ft_memdel.c ft_striter.c ft_striteri.c ft_strnew.c \
		 ft_strdel.c ft_strclr.c ft_strsub.c ft_strmap.c ft_strmapi.c \
		 ft_strsplit.c ft_itoa.c ft_strjoin.c ft_strtrim.c

$(NAME): libft.h
		$(cc) $(CFLAGS) -c $(PART_1) $(PART_2)
		ar rc $(NAME) *.o
		ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf *.o

fclean:clean
	rm -rf $(NAME)

re: fclean all
