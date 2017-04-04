# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cledant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 10:40:13 by cledant           #+#    #+#              #
#    Updated: 2017/04/04 21:27:20 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Werror -Wall -Wextra

OBJ_DIR_NAME = obj

SRCS_NAME = main.cpp User.cpp Counter.cpp

SRCS_PATH = .

INCLUDES_PATH = .

OBJ_SRCS = $(SRCS_NAME:%.cpp=$(OBJ_DIR_NAME)/%.o)

NAME = phonebook

all : $(NAME)

$(NAME) : $(OBJ_SRCS)
	$(CC) -o $@ $^ $(CFLAGS)

$(OBJ_DIR_NAME)/%.o : $(SRCS_PATH)/%.cpp
	mkdir -p $(OBJ_DIR_NAME)
	$(CC) -o $@ -c $< $(CFLAGS) -I$(INCLUDES_PATH)

clean :
	rm -rf $(OBJ_DIR_NAME)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
