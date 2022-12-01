# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 15:27:32 by ydahni            #+#    #+#              #
#    Updated: 2022/11/30 18:56:16 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Brain = Brain
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

all : Brain
	
$(Brain): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Brain
	@tput setaf 2; echo "I don’t want to set the world on fire Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Brain

re: fclean all 