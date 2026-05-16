# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/30 19:57:49 by ichikawahik       #+#    #+#              #
#    Updated: 2026/05/16 17:43:12 by hichikaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = phonebook.cpp main.cpp contact.cpp phonebook_utils.cpp

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

fclean: clean
	@$(RM) $(NAME)

clean:
	@$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
