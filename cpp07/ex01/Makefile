# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 00:13:39 by ydahni            #+#    #+#              #
#    Updated: 2022/12/23 18:05:06 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Iter = Iter
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

all : Iter
	
$(Iter): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Iter
	@tput setaf 2; echo "Iter Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Iter

re: fclean all 