# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 21:16:04 by ydahni            #+#    #+#              #
#    Updated: 2022/12/18 21:16:06 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = Serialization.cpp main.cpp
Serialization = Serialization

OBJ = ${SRC:.cpp=.o}

all : Serialization
	
$(Serialization): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Serialization
	@tput setaf 2; echo "Serialization Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Serialization

re: fclean all 