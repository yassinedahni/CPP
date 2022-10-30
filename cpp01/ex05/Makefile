# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:03:37 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Harl = Harl
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Harl.cpp

OBJ = ${SRC:.cpp=.o}

all : Harl
	
$(Harl): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Harl
	@tput setaf 2; echo "Harl 2.0 Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Harl

re: fclean all 