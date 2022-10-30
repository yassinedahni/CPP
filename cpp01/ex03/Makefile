# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:03:26 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

violence = violence
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 

OBJ = ${SRC:.cpp=.o}

all : violence
	
$(violence): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o violence
	@tput setaf 2; echo "Unnecessary Violence Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f violence

re: fclean all 