# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 15:27:32 by ydahni            #+#    #+#              #
#    Updated: 2022/11/30 18:55:33 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Abstract = Abstract
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

all : Abstract
	
$(Abstract): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Abstract
	@tput setaf 2; echo "Abstract class Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Abstract

re: fclean all 