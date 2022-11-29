# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:24:39 by ydahni            #+#    #+#              #
#    Updated: 2022/11/24 22:40:55 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ClapTrap = ClapTrap
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : ClapTrap
	
$(ClapTrap): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o ClapTrap
	@tput setaf 2; echo "ClapTrap Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f ClapTrap

re: fclean all 