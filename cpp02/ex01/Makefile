# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:24:39 by ydahni            #+#    #+#              #
#    Updated: 2022/11/02 00:40:11 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

fixed = fixed
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Fixed.cpp

OBJ = ${SRC:.cpp=.o}

all : fixed
	
$(fixed): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o fixed
	@tput setaf 2; echo "Towards A More Useful Fixed-Point Number Class Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f fixed

re: fclean all 