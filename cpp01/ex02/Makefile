# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:03:15 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BRAIN = BRAIN
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

all : BRAIN
	
$(BRAIN): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o BRAIN
	@tput setaf 2; echo "HI THIS IS BRAIN Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f BRAIN

re: fclean all 