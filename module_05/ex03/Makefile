# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 11:29:49 by wwallas-          #+#    #+#              #
#    Updated: 2023/01/04 13:55:13 by wwallas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE		=	-I./
NAME		=	form


CC			=	c++ -std=c++98
CFLAGS		=	#-Wall -Wextra -Werror

SOURCES		=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
