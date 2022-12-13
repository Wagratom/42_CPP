# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 11:29:49 by wwallas-          #+#    #+#              #
#    Updated: 2022/12/12 15:29:44 by wwallas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE		=	-I./
NAME		=	megaphone

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror  -std=c++98

SOURCES		=	megaphone.cpp

OBJS_DIR	=	objs
OBJS		=	$(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SOURCES))

RM			=	rm -rf

$(OBJS_DIR)/%.o: %.cpp
			$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

all:	$(NAME);

$(NAME):	$(OBJS_DIR) $(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $@

$(OBJS_DIR):
	mkdir -p objs

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
