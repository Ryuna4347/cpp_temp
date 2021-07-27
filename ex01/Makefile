# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/04 10:24:12 by hyunyoo           #+#    #+#              #
#    Updated: 2021/07/27 15:23:25 by hyunyoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Data.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= serialization

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
