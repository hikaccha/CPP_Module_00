# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/30 19:57:13 by ichikawahik       #+#    #+#              #
#    Updated: 2026/02/12 15:19:30 by ichikawahik      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

CC = clang++
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo '$(NAME) compiled!'

fclean : clean
	@$(RM) $(NAME)

clean :
	@$(RM) $(OBJS)

re : fclean all

.PHONY : all clean fclean re
