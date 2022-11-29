# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:24:39 by ydahni            #+#    #+#              #
#    Updated: 2022/11/25 17:45:13 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ScavTrap = ScavTrap
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : ScavTrap
	
$(ScavTrap): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o ScavTrap
	@tput setaf 2; echo "ScavTrap Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f ScavTrap

re: fclean all 