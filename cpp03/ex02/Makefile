# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:24:39 by ydahni            #+#    #+#              #
#    Updated: 2022/11/25 17:45:31 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FragTrap = FragTrap
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp FragTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : FragTrap
	
$(FragTrap): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o FragTrap
	@tput setaf 2; echo "FragTrap Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f FragTrap

re: fclean all 