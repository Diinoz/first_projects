# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicordie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 15:41:11 by nicordie          #+#    #+#              #
#    Updated: 2023/06/06 15:43:24 by nicordie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SOURCES = ft_printf.c ft_printf_type.c ft_printf_hex.c ft_printf_ptr.c

INCLUDES = libftprintf.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -I includes

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
		ar -rc $(NAME) $(OBJECTS)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all
