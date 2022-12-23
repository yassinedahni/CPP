# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 18:33:41 by ydahni            #+#    #+#              #
#    Updated: 2022/12/23 18:47:27 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Array = Array
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

all : Array
	
$(Array): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Array
	@tput setaf 2; echo "Array Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Array

re: fclean all 