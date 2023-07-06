# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicordie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 14:46:58 by nicordie          #+#    #+#              #
#    Updated: 2023/06/16 12:44:34 by nicordie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = get_next_line.a

SOURCES =  get_next_line.c get_next_line_utils.c

INCLUDES = get_next_line.h

CC = cc

CFLAGS = -Wall -Wextra -Werror 

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
		ar -rc $(NAME) $(OBJECTS)

clean:
		rm -f $(OBJECTS)
		rm -f $(OBJECTS_BNS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
