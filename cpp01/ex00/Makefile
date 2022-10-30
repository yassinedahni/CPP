# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:02:43 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Zombie = Zombie
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

all : Zombie
	
$(Zombie): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Zombie
	@tput setaf 2; echo "Zombies Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Zombie

re: fclean all 