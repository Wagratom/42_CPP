# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 11:08:46 by wwalas-           #+#    #+#              #
#    Updated: 2023/02/27 11:19:06 by wwalas-          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	form

INCLUDE		=	-I./includes

SOURCES		=	main.cpp Bureaucrat.cpp AForm.cpp

OBJ			=	$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SOURCES))
OBJ_DIR		=	objs

CC			=	c++ -std=c++98
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

VPATH		=	./src

$(OBJ_DIR)/%.o:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ_DIR):
	mkdir -p objs

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
