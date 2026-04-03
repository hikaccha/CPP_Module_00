# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/30 19:57:49 by ichikawahik       #+#    #+#              #
#    Updated: 2026/04/03 15:59:22 by hichikaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = phonebook.cpp

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo '$(NAME) compiled!'

fclean: clean
	@$(RM) $(NAME)

clean:
	@$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
