# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 19:29:35 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/24 17:57:50 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS:= $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
DEBUG:= -g
NAME:= bsp
RM:= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o): $(%.c)
	@echo "Creating objects"
	$(CC) -c $^ -o $@

clean:
	@echo "Cleaning objects"
	$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning objects and $(NAME)"
	$(RM) $(NAME)

re:	fclean all

run: all
	./$(NAME)

.PHONY: all $(NAME) clean fclean re
