# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribeiro <aribeiro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/09 11:43:08 by aribeiro          #+#    #+#              #
#    Updated: 2017/04/09 14:24:10 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

SRC = 	AEntity.cpp \
		Bullet.cpp \
		EnemyA.cpp \
		main.cpp \
		Player.cpp \
		World.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

#variables for colors to highlight the make results
yellow	= \033[33;1m
blue	= \033[36;1m
magenta = \033[35;1m
green	= \033[32;1m
normal	= \033[0m

all : $(NAME)

$(NAME) : $(OBJ)
	clang++ -o $(NAME) $(OBJ) -lncurses
	@printf "$(yellow)->./$(NAME) is created$(normal)\n"

%.o:%.cpp
	clang++ -c $< $(FLAGS)

clean :
	rm -rf $(OBJ)
	@printf "$(green)clean -> ok$(normal)\n\n"

fclean : clean
	rm -rf $(NAME)
	@printf "$(green)fclean -> ok"
	@printf "$(normal)\n\n"

re : fclean all

.PHONY : all clean fclean re
