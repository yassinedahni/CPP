# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 15:32:59 by ydahni            #+#    #+#              #
#    Updated: 2022/12/28 00:38:07 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MutantStack = MutantStack
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

all : MutantStack
	
$(MutantStack): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o MutantStack
	@tput setaf 2; echo "Mutated abomination Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f MutantStack

re: fclean all 