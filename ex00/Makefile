# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 19:29:35 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/23 00:12:15 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS:= $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
DEBUG:= -g
NAME:= Fixed

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o): $(%.c)
	@echo "Creating objects"
	$(CC) -c $^ -o $@

clean:
	@echo "Cleaning objects"
	rm -rf $(OBJS)

fclean: clean
	@echo "Cleaning objects and $(NAME)"
	rm -rf $(NAME)

re:	fclean all

run: all
	./$(NAME)

.PHONY: all $(NAME) clean fclean re
