# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 15:27:32 by ydahni            #+#    #+#              #
#    Updated: 2022/11/29 22:21:33 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Polymorphism = Polymorphism
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = ${SRC:.cpp=.o}

all : Polymorphism
	
$(Polymorphism): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Polymorphism
	@tput setaf 2; echo "Polymorphism Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Polymorphism

re: fclean all 