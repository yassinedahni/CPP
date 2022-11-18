# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:24:39 by ydahni            #+#    #+#              #
#    Updated: 2022/11/01 23:40:08 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Orthodox = Orthodox
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Fixed.cpp

OBJ = ${SRC:.cpp=.o}

all : Orthodox
	
$(Orthodox): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Orthodox
	@tput setaf 2; echo "My First Class in Orthodox Canonical Form Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Orthodox

re: fclean all 