# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 11:43:29 by hyunyoo           #+#    #+#              #
#    Updated: 2021/07/21 11:43:31 by hyunyoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS	= 	megaphone.cpp \

CFLAG	= 	-Wall -Wextra -Werror
RM		=	rm -rf
OBJS	= $(SRCS:%.cpp=%.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	@clang++ $(CFLAG) $(OBJS) -o $(NAME) > /dev/null

clean	:
	@rm -rf *.o
	@rm -rf $(OBJS)

fclean	: clean
	@rm -rf $(NAME)

re		: fclean all

.PHONY:			all, clean, fclean, re
